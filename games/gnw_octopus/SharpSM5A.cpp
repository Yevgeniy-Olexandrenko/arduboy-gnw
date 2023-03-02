#include "SharpSM5A.h"

#include <string.h>
#include <avr/pgmspace.h>

// -----------------------------------------------------------------------------

SharpSM5A::SharpSM5A(IO* io)
    : m_io(io)
{}

void SharpSM5A::PowerOn(const uint8_t* firmware)
{
    m_rom = firmware;
    
    m_stack = 0;
    m_pc = 0;
    m_prev_pc = 0;
    m_op = 0;
    m_prev_op = 0;
    m_param = 0;
    m_acc = 0;
    m_bl = 0;
    m_bm = 0;
    m_c = 0;
    m_skip = false;
    m_div = 0;
    m_gamma = false;
    m_bp = 0;
    m_halt = false;

    memset(m_ox, 0, sizeof(m_ox));
    memset(m_o, 0, sizeof(m_o));
    m_mx = 0;
    m_cb = 0;
    m_rsub = false;

    m_paramRead = false;
    Reset();
}

void SharpSM5A::Reset()
{
    m_skip = false;
    m_halt = false;
    m_op = 0;
    m_prev_op = 0;
    reset_vector();
    m_prev_pc = m_pc;
    m_bp = 1;
    m_io->WrPortR(0);

    push_stack();
    op_idiv();
    m_gamma = true;
    m_cb = 0;
    m_rsub = false;

    // ACL time is 0.5 second
    m_aclClocks = (k_mcuClockFreqHz / 2);
}

void SharpSM5A::Clock()
{
    if (m_aclClocks > 0) m_aclClocks--;
    IncrementDivider();

    if ((m_div & 0x0001) != 0)
    {
        if (IsACLOccur() || (m_halt && !IsWakeUpOccur()))
        {
            // got nothing to do
            return;
        }

        if (!m_paramRead)
        {
            // remember previous state
            m_prev_op = m_op;
            m_prev_pc = m_pc;

            // fetch next opcode
            m_op = RdROM(m_pc);
            IncrementPC();

            // LBL and prefix opcodes are 2 bytes
            m_paramRead = (m_op == 0x5E || m_op == 0x5F);
        }
        else
        {
            // fetch opcode param
            m_param = RdROM(m_pc);
            IncrementPC();

            m_paramRead = false;
        }

        if (!m_paramRead)
        {
            // handle opcode if it's not skipped
            if (m_skip)
            {
                m_skip = false;
                m_op = 0; // fake nop
            }
            else
            {
                ExecuteInstruction();
            }
        }
    }
}

bool SharpSM5A::IsInAclProcedure() const
{
    return (m_aclClocks > 0);
}

bool SharpSM5A::IsInStandbyMode() const
{
    return m_halt;
}

// -----------------------------------------------------------------------------

bool SharpSM5A::IsACLOccur()
{
    if (m_io->RdAcl()) Reset();
    return (m_aclClocks > 0);
}

bool SharpSM5A::IsWakeUpOccur()
{
    // this is necessary because the MCU can wake up on K input activity
    // set K input lines active state
    bool k_active = ((m_io->RdPortK() & 0x0F) != 0);

    // in halt mode, wake up after 1S signal or K input
    if (k_active || m_gamma)
    {
        // note: official doc warns that Bl/Bm and the stack are undefined
        // after waking up, but we leave it unchanged
        m_halt = false;
        wakeup_vector();
        return true;
    }
    return false;
}

void SharpSM5A::IncrementPC()
{
    // PL(program counter low 6 bits) is a simple LFSR: newbit = (bit0==bit1)
    // PU,PM(high bits) specify page, PL specifies steps within page
    int feed = ((((m_pc >> 1) ^ m_pc) & 0x01) ? 0x00 : 0x20);
    m_pc = (feed | ((m_pc >> 1) & 0x1F) | (m_pc & ~0x3F));
}

void SharpSM5A::IncrementDivider()
{
    m_div = ((m_div + 1) & 0x7FFF);

    // 1S(gamma) signal on overflow(falling edge of F1)
    if (m_div == 0) m_gamma = true;

    //	update lcd every 15.625 ms
    if ((m_div & 0x01FF) == 0)
    {
        for (int o = 0; o < k_mcuLcdOCount; ++o)
        {
            uint8_t h0segments = (m_bp ? m_o[o] : 0);
            uint8_t h1segments = (m_bp ? m_ox[o] : 0);
            m_io->UpdateLCD(o, h1segments << 4 | h0segments);
        }
    }
}

void SharpSM5A::ExecuteInstruction()
{
    switch (m_op & 0xf0)
    {
    case 0x20: op_lax(); break;
    case 0x30: op_adx(); break;
    case 0x40: op_lb();  break;
    case 0x70: op_ssr(); break;
    case 0x80:
    case 0x90:
    case 0xa0:
    case 0xb0: op_tr();  break;
    case 0xc0:
    case 0xd0:
    case 0xe0:
    case 0xf0: op_trs(); break;
    default:
        switch (m_op & 0xFC)
        {
        case 0x04: op_rm();   break;
        case 0x0c: op_sm();   break;
        case 0x10: op_exc();  break;
        case 0x14: op_exci(); break;
        case 0x18: op_lda();  break;
        case 0x1c: op_excd(); break;
        case 0x54: op_tmi();  break;
        default:
            switch (m_op)
            {
            default:   op_err();   break;
            case 0x00: op_skip();  break;
            case 0x01: op_atr();   break;
            case 0x02: op_sbm();   break;
            case 0x03: op_atbp();  break;
            case 0x08: op_add();   break;
            case 0x09: op_add11(); break;
            case 0x0a: op_coma();  break;
            case 0x0b: op_exbla(); break;
            case 0x50: op_ta();    break;
            case 0x51: op_tb();    break;
            case 0x52: op_tc();    break;
            case 0x53: op_tam();   break;
            case 0x58: op_tis();   break;
            case 0x59: op_ptw();   break;
            case 0x5a: op_ta0();   break;
            case 0x5b: op_tabl();  break;
            case 0x5c: op_tw();    break;
            case 0x5d: op_dtw();   break;
            case 0x5f: op_lbl();   break;
            case 0x60: op_comcn(); break;
            case 0x61: op_pdtw();  break;
            case 0x62: op_wr();    break;
            case 0x63: op_ws();    break;
            case 0x64: op_incb();  break;
            case 0x65: op_idiv();  break;
            case 0x66: op_rc();    break;
            case 0x67: op_sc();    break;
            case 0x68: op_rmf();   break;
            case 0x69: op_smf();   break;
            case 0x6a: op_kta();   break;
            case 0x6b: op_rbm();   break;
            case 0x6c: op_decb();  break;
            case 0x6d: op_comcb(); break;
            case 0x6e: op_rtn0();  break;
            case 0x6f: op_rtn1();  break;
            case 0x5e:
                m_op = ((m_op << 8) | m_param);
                switch (m_param)
                {
                default:   op_err();   break;
                case 0x00: op_cend();  break;
                case 0x04: op_dta();   break;
                
                }
                break;
            }
            break;
        }
        break;
    }
}

uint8_t SharpSM5A::RdROM(uint16_t address)
{
    if ((address & 0x0400) && (address & 0x03C0) > 0x0300)
    {
        address &= 0x043F;
        address |= 0x0300;
    }
    return pgm_read_byte(m_rom + address);
}

uint8_t SharpSM5A::RdRAM(uint16_t address)
{
    int page = (address & 0x70) >> 4;
    int byte = (address & 0x0F);
    if (page > 0x04) page = 0x04;
    if (byte > 0x0C) byte = 0x0C;
    return m_ram[page * 13 + byte];
}

void SharpSM5A::WrRAM(uint16_t address, uint8_t data)
{
	int page = (address & 0x70) >> 4;
	int byte = (address & 0x0F);
	if (page > 0x04) page = 0x04;
	if (byte > 0x0C) byte = 0x0C;
	m_ram[page * 13 + byte] = data;
}

// -----------------------------------------------------------------------------

void SharpSM5A::op_lax()
{
	// LAX x: load ACC with immediate value, skip any next LAX
	if ((m_op & ~0x0F) != (m_prev_op & ~0x0F))
	{
		m_acc = (m_op & 0x0F);
	}
}

void SharpSM5A::op_adx()
{
	// ADX x: add immediate value to ACC, skip next on carry except if x = 10
	m_acc += (m_op & 0x0F);
	m_skip = (((m_op & 0x0F) != 10 && (m_acc & 0x10) != 0));
	m_acc &= 0x0F;
}

void SharpSM5A::op_lb()
{
	// LB x: load BM/BL with 4-bit immediate value (partial)
	m_bm = (m_op & 0x03);
	m_bl = (((m_op >> 2) & 0x03) | ((m_op & 0x0C) ? 8 : 0));
}

void SharpSM5A::op_ssr()
{
	// SSR x: set stack upper bits, also sets E flag for next opcode
	set_su(m_op & 0x0F);
}

void SharpSM5A::op_tr()
{
	// TR x: jump (long or short)
	m_pc = ((m_pc & ~0x3F) | (m_op & 0x3F));
	if (!m_rsub)
	{
		do_branch(m_cb, get_su(), m_pc & 0x3F);
	}
}

void SharpSM5A::op_trs()
{
    // TRS x: call subroutine
    if (!m_rsub)
    {
        m_rsub = true;
        uint8_t su = get_su();
        
        push_stack();
        do_branch(0x01, 0x00, m_op & 0x3f);

        // E flag was set?
        if ((m_prev_op & 0xF0) == 0x70)
        {
            do_branch(m_cb, su, m_pc & 0x3F);
        }
    }
    else
    {
        m_pc = ((m_pc & ~0xFF) | ((m_op << 2) & 0xC0) | (m_op & 0x0F));
    }
}

void SharpSM5A::op_rm()
{
	// RM x: reset RAM bit
	ram_w(ram_r() & ~bitmask(m_op));
}

void SharpSM5A::op_sm()
{
	// SM x: set RAM bit
	ram_w(ram_r() | bitmask(m_op));
}

void SharpSM5A::op_exc()
{
	// EXC x: exchange ACC with RAM, xor BM with x
	uint8_t a = m_acc;
	m_acc = ram_r();
	ram_w(a);
	m_bm ^= (m_op & 0x03);
}

void SharpSM5A::op_exci()
{
	// EXCI x: EXC x, INCB
	op_exc();
	op_incb();
}

void SharpSM5A::op_lda()
{
	// LDA x: load ACC with RAM, xor BM with x
	m_acc = ram_r();
	m_bm ^= (m_op & 0x03);
}

void SharpSM5A::op_excd()
{
	// EXCD x: EXC x, DECB
	op_exc();
	op_decb();
}

void SharpSM5A::op_tmi()
{
	// TMI x: skip next if RAM bit is set
	m_skip = ((ram_r() & bitmask(m_op)) != 0);
}

void SharpSM5A::op_skip()
{
	// SKIP: no operation
}

void SharpSM5A::op_atr()
{
	// ATR: output ACC to R
	uint8_t out = (~m_acc & 0x0F);
	m_io->WrPortR(out);
}

void SharpSM5A::op_sbm()
{
	// SBM: set RAM address high bit
	m_bm |= 4;
}

void SharpSM5A::op_atbp()
{
	// ATBP: output ACC to BP LCD flag(s)
	m_bp = m_acc;
}

void SharpSM5A::op_add()
{
	// ADD: add RAM to ACC
	m_acc = ((m_acc + ram_r()) & 0x0F);
}

void SharpSM5A::op_add11()
{
	// ADD11: add RAM and carry to ACC and carry, skip next on carry
	m_acc += (ram_r() + m_c);
	m_c = ((m_acc >> 4) & 0x01);
	m_skip = (m_c == 1);
	m_acc &= 0x0F;
}

void SharpSM5A::op_coma()
{
	// COMA: complement ACC
	m_acc ^= 0x0F;
}

void SharpSM5A::op_exbla()
{
	// EXBLA: exchange BL with ACC
	uint8_t a = m_acc;
	m_acc = m_bl;
	m_bl = a;
}

void SharpSM5A::op_ta()
{
	// TAL: skip next if BA pin is set
	m_skip = m_io->RdAlpha();
}

void SharpSM5A::op_tb()
{
	// TB: skip next if B(beta) pin is set
	m_skip = m_io->RdBeta();
}

void SharpSM5A::op_tc()
{
	// TC: skip next if no carry
	m_skip = !m_c;
}

void SharpSM5A::op_tam()
{
	// TAM: skip next if ACC equals RAM
	m_skip = (m_acc == ram_r());
}

void SharpSM5A::op_tis()
{
	// TIS: skip next if 1S(gamma flag) is clear, reset it after
	m_skip = !m_gamma;
	m_gamma = false;
}

void SharpSM5A::op_ptw()
{
	// PTW: partial transfer W' to W
	m_o[k_mcuLcdOCount - 1] = m_ox[k_mcuLcdOCount - 1];
	m_o[k_mcuLcdOCount - 2] = m_ox[k_mcuLcdOCount - 2];
}

void SharpSM5A::op_ta0()
{
	// TA0: skip next if ACC is clear
	m_skip = !m_acc;
}

void SharpSM5A::op_tabl()
{
	// TABL: skip next if ACC equals BL
	m_skip = (m_acc == m_bl);
}

void SharpSM5A::op_tw()
{
	// TW: transfer W' to W
	for (int i = 0; i < k_mcuLcdOCount; i++)
	{
		m_o[i] = m_ox[i];
	}
}

void SharpSM5A::op_dtw()
{
	// DTW: shift digit into W'
	shift_w();
	m_ox[k_mcuLcdOCount - 1] = get_digit();
}

void SharpSM5A::op_lbl()
{
	// LBL xy: load BM/BL with 8-bit immediate value
	m_bl = (m_param & 0x0f);
	m_bm = (m_param & 0x70) >> 4;
}

void SharpSM5A::op_comcn()
{
	// COMCN: complement CN flag
	m_bp ^= 0x08;
}

void SharpSM5A::op_pdtw()
{
	// PDTW: partial shift digit into W'
	m_ox[k_mcuLcdOCount - 2] = m_ox[k_mcuLcdOCount - 1];
	m_ox[k_mcuLcdOCount - 1] = get_digit();
}

void SharpSM5A::op_wr()
{
	// WR: shift ACC into W', reset last bit
	shift_w();
	m_ox[k_mcuLcdOCount - 1] = (m_acc & 0x07);
}

void SharpSM5A::op_ws()
{
	// WR: shift ACC into W', set last bit
	shift_w();
	m_ox[k_mcuLcdOCount - 1] = (m_acc | 0x08);
}

void SharpSM5A::op_incb()
{
	// INCB: increment BL, skip next on overflow on 3rd bit!
	m_bl = ((m_bl + 1) & 0x0F);
	m_skip = (m_bl == 8);
}

void SharpSM5A::op_idiv()
{
	// IDIV: reset divider low 9 bits
	m_div &= 0x3F;
}

void SharpSM5A::op_rc()
{
	// RC: reset carry
	m_c = 0;
}

void SharpSM5A::op_sc()
{
	// SC: set carry
	m_c = 1;
}

void SharpSM5A::op_rmf()
{
	// RMF: reset m' flag, also clears ACC
	m_mx = 0;
	m_acc = 0;
}

void SharpSM5A::op_smf()
{
	// SMF: set m' flag
	m_mx = 1;
}

void SharpSM5A::op_kta()
{
	// KTA: input K to ACC
	m_acc = (m_io->RdPortK() & 0x0F);
}

void SharpSM5A::op_rbm()
{
	// RBM: reset RAM address high bit
	m_bm &= ~0x04;
}

void SharpSM5A::op_decb()
{
	// DECB: decrement BL, skip next on overflow
	m_bl = ((m_bl - 1) & 0x0F);
	m_skip = (m_bl == 0x0F);
}

void SharpSM5A::op_comcb()
{
	// COMCB: complement CB
	m_cb ^= 1;
}

void SharpSM5A::op_rtn0()
{
	// RTN0(RTN): return from subroutine
	pop_stack();
	m_rsub = false;
}

void SharpSM5A::op_rtn1()
{
	// RTN1: return from subroutine, skip next
	op_rtn0();
	m_skip = true;
}

void SharpSM5A::op_cend()
{
	// CEND: stop clock (halt the cpu and go into low-power mode)
	m_halt = true;
}

void SharpSM5A::op_dta()
{
	// DTA: transfer divider low 4 bits to ACC
	m_acc = ((m_div >> 11) & 0x0F);
}

void SharpSM5A::op_err()
{
	// TODO: unknown opcode
}

// -----------------------------------------------------------------------------

void SharpSM5A::set_su(uint8_t su)
{
	m_stack = ((m_stack & ~0x3C0) | (su << 6 & 0x3C0));
}

uint8_t SharpSM5A::get_su()
{
	return ((m_stack >> 6) & 0x0F); 
}

void SharpSM5A::push_stack()
{
	m_stack = m_pc;
}

void SharpSM5A::pop_stack()
{
	m_pc = (m_stack & 0x07FF);
}

void SharpSM5A::do_branch(uint8_t pu, uint8_t pm, uint8_t pl)
{
	// set new PC(Pu/Pm/Pl)
	m_pc = (((pu << 10) | ((pm << 6) & 0x3C0) | (pl & 0x03F)) & 0x07FF);
}

void SharpSM5A::reset_vector()
{
    do_branch(0x00, 0x0F, 0x00);
}

void SharpSM5A::wakeup_vector()
{ 
    m_cb = 0;
    do_branch(0x00, 0x00, 0x00); 
}

uint8_t SharpSM5A::bitmask(uint16_t param)
{
	// bitmask from immediate opcode param
	return (1 << (param & 0x03));
}

uint8_t SharpSM5A::ram_r()
{
	uint8_t address = (((m_bm << 4) | m_bl) & 0x7F);
	return (RdRAM(address) & 0x0F);
}

void SharpSM5A::ram_w(uint8_t data)
{
	uint8_t address = (((m_bm << 4) | m_bl) & 0x7F);
	WrRAM(address, data & 0x0F);
}

void SharpSM5A::shift_w()
{
	// shifts internal W' latches
	for (int i = 0; i < k_mcuLcdOCount - 1; ++i)
	{
		m_ox[i] = m_ox[i + 1];
	}
}

uint8_t SharpSM5A::get_digit()
{
    // default digit segments PLA
    static const uint8_t lut_digits[0x20] PROGMEM =
    {
        0x0e, 0x00, 0x0c, 0x08, 0x02, 0x0a, 0x0e, 0x02,
        0x0e, 0x0a, 0x00, 0x00, 0x02, 0x0a, 0x02, 0x02,
        0x0b, 0x09, 0x07, 0x0f, 0x0d, 0x0e, 0x0e, 0x0b,
        0x0f, 0x0f, 0x04, 0x00, 0x0d, 0x0e, 0x04, 0x00
    };
    uint8_t cn = ((m_bp >> 3) & 0x01);
    return pgm_read_byte(lut_digits + (cn << 4 | m_acc)) | (~cn & m_mx);
}
