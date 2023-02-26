#pragma once

#include <stdint.h>

// Implementation for microcontroller hardware.

class SharpSM5A
{
public:
    static const uint8_t  k_mcuLcdHCount   = 2;
    static const uint8_t  k_mcuLcdOCount   = 9;
    static const uint8_t  k_mcuLcdSCount   = 4;
    static const uint16_t k_mcuClockFreqHz = 32768;

    class IO
    {
    public:
        virtual bool    RdAcl() const = 0;
        virtual bool    RdAlpha() const = 0;
        virtual bool    RdBeta() const = 0;
        virtual uint8_t RdPortK() const = 0;
        virtual void    WrPortR(uint8_t data) = 0;
        virtual void    WrLCD(int o, uint8_t segments) = 0;
    };

    SharpSM5A(IO* io);

    void PowerOn(const uint8_t* firmware);
    void Reset();
    void Clock();

    bool IsInAclProcedure() const;
    bool IsInStandbyMode() const;

private:
    bool IsACLOccur();
    bool IsWakeUpOccur();

    void IncrementPC();
    void IncrementDivider();
    void ExecuteInstruction();
   
    uint8_t RdROM(uint16_t address);
    uint8_t RdRAM(uint16_t address);
    void    WrRAM(uint16_t addres, uint8_t data);

private:
    void op_lax();   void op_adx();   void op_lb();    void op_ssr();
    void op_tr();    void op_trs();   void op_rm();    void op_sm();
    void op_exc();   void op_exci();  void op_lda();   void op_excd();
    void op_tmi();   void op_skip();  void op_atr();   void op_sbm();
    void op_atbp();  void op_add();   void op_add11(); void op_coma();
    void op_exbla(); void op_ta();    void op_tb();    void op_tc();
    void op_tam();   void op_tis();   void op_ptw();   void op_ta0();
    void op_tabl();  void op_tw();    void op_dtw();   void op_lbl();
    void op_comcn(); void op_pdtw();  void op_wr();    void op_ws();
    void op_incb();  void op_idiv();  void op_rc();    void op_sc();
    void op_rmf();   void op_smf();   void op_kta();   void op_rbm();
    void op_decb();  void op_comcb(); void op_rtn0();  void op_rtn1();
    void op_cend();  void op_dta();   void op_err();

private:
    void    set_su(uint8_t su);
    uint8_t get_su();
    void    push_stack();
    void    pop_stack();
    void    do_branch(uint8_t pu, uint8_t pm, uint8_t pl);
    void    reset_vector();
    void    wakeup_vector();
    uint8_t bitmask(uint16_t param);
    uint8_t ram_r();
    void    ram_w(uint8_t data);
    void    shift_w();
    uint8_t get_digit();

private:
    IO* m_io;
    const uint8_t* m_rom;  // rom 29x64x8
    uint8_t m_ram[5 * 13]; // ram 5x13x4

    uint16_t m_aclClocks;
    bool m_paramRead;

    uint8_t  m_cb;
    uint16_t m_pc, m_prev_pc;   // programm counter
    uint16_t m_op, m_prev_op;   // operation code
    uint8_t  m_param;           // operation parameter
    bool m_halt;                // mcu is halted flag
    bool m_skip;                // skip next opcode flag

    uint16_t m_stack;
    bool m_rsub;
        
    uint8_t m_ox[k_mcuLcdOCount];   // W' latch, max 9
    uint8_t m_o[k_mcuLcdOCount];    // W latch
    uint8_t m_bp;
    uint8_t m_mx;

    uint8_t m_acc;
    uint8_t m_bl;
    uint8_t m_bm;
    uint8_t m_c;

    uint16_t m_div;
    bool m_gamma;
};
