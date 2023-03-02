#include "GameAndWatch.h"
#include <avr/pgmspace.h>
#include <string.h>

GameAndWatch::GameAndWatch(Handler* handler)
    : m_handler(handler)
    , m_mcu(this)
{
}

void GameAndWatch::PowerOn(GNWData controls, GNWData firmware)
{
    // init controls
    for (int i = 0; i < Control::count; ++i)
    {
        uint8_t config = pgm_read_byte(controls + i);
        if (config == 0xFF)
        {
            // clear line if not used
            m_lines[i] = Line();
        }
        else
        {
            // configure line with sigal -> input
            Signal signal(config >> 4);
            Input input(config & 0x0F);
            m_lines[i] = Line(signal, input);
        }
    }

    // power on MCU
    m_mcu.PowerOn(firmware);

    // power on LCD
    memset(m_lcd.rsegs, 0, sizeof(m_lcd.rsegs));
}

void GameAndWatch::SetControl(Control control, bool active)
{
    if (m_lines[control].used)
    {
        m_lines[control].active = active;
    }
}

void GameAndWatch::Clock()
{
    m_mcu.Clock();
}

bool GameAndWatch::IsReset() const
{
    return m_mcu.IsInAclProcedure();
}

bool GameAndWatch::IsPowerDown() const
{
    return m_mcu.IsInStandbyMode();
}

bool GameAndWatch::IsSegmentVisible(int i) const
{
    int o = (i >> 3 & 0x0F);
    int s = (i >> 0 & 0x03);
    int h = (i >> 2 & 0x01);
    return IsSegmentVisible(h, o, s);
}

bool GameAndWatch::IsSegmentVisible(int h, int o, int s) const
{
    int sbit = ((h << 2) | s);
    return bool((m_lcd.rsegs[o] >> sbit) & 0x01);
}

// -----------------------------------------------------------------------------

bool GameAndWatch::RdAcl() const
{
    for(int i = 0; i < Control::count; ++i)
    {
        const Line& line = m_lines[i];
        if (line.signal == Signal::VCC && line.input == Input::MCU_ACL && line.active)
        {
            return true;
        }
    }
    return false;
}

bool GameAndWatch::RdAlpha() const
{
    for (int i = 0; i < Control::count; ++i)
    {
        const Line& line = m_lines[i];
        if (line.signal == Signal::GND && line.input == Input::MCU_ALPHA && line.active)
        {
            return false;
        }
    }
    return true;
}

bool GameAndWatch::RdBeta() const
{
    for (int i = 0; i < Control::count; ++i)
    {
        const Line& line = m_lines[i];
        if (line.signal == Signal::GND && line.input == Input::MCU_BETA && line.active)
        {
            return false;
        }
    }
    return true;
}

uint8_t GameAndWatch::RdPortK() const
{
    uint8_t data = 0;
    for (int i = 0; i < Control::count; ++i)
    {
        const Line& line = m_lines[i];
        if (line.input >= Input::MCU_K1 && line.input <= Input::MCU_K4)
        {
            bool hiLevel = false;
            if (line.signal >= Signal::MCU_R2 && line.signal <= Signal::MCU_R4)
            {
                hiLevel = bool(m_mcuPortR & (1 << (line.signal - 1)));
            }
            else if (line.signal == Signal::VCC)
            {
                hiLevel = true;
            }
            if (hiLevel && line.active)
            {
                data |= (1 << (line.input - 1));
            }
        }
    }
    return data;
}

void GameAndWatch::WrPortR(uint8_t data)
{
    m_mcuPortR = data;
    m_handler->SetBuzzerLevel(data & 0x01);
}

void GameAndWatch::UpdateLCD(int o, uint8_t segments)
{
    if (o == 0) m_lcd.changes = 0;

    m_lcd.changes |= (m_lcd.ssegs[o] ^ segments);
    m_lcd.ssegs[o] = segments;

    if (o == SharpSM5A::k_mcuLcdOCount - 1 && !m_lcd.changes)
    {
        memcpy(m_lcd.rsegs, m_lcd.ssegs, sizeof(m_lcd.rsegs));
    }
}

// -----------------------------------------------------------------------------
