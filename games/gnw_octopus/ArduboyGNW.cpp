#include "ArduboyGNW.h"

static GameAndWatch* s_gnw = nullptr;

ISR(TIMER3_COMPA_vect)
{
    if (s_gnw) s_gnw->Clock();
}

// -----------------------------------------------------------------------------

ArduboyGNW::ArduboyGNW(Arduboy2Base& arduboy)
    : m_arduboy(arduboy)
    , m_segments(nullptr)
    , m_graphics(nullptr)
    , m_sprites(nullptr)
    , m_state(0)
    , m_lock(false)
    , m_gnw(this)
{
    s_gnw  = &m_gnw;
}

void ArduboyGNW::begin()
{
    m_arduboy.begin();
    m_arduboy.audio.begin();
    m_arduboy.setFrameRate(32);
}

void ArduboyGNW::powerOn(GNWData controls, GNWData segments, GNWData graphics, GNWData sprites, GNWData firmware)
{
    // init drawing
    m_segments = segments;
    m_graphics = graphics;
    m_sprites  = sprites;

    // init GNW hardware
    m_gnw.PowerOn(controls, firmware);

    // init timer for 32768 Hz clock
    TCCR3A = 0;
    TCCR3B = (bit(WGM32) | bit(CS31));  // set CTC mode, clock prescaler is 8
    OCR3A  = ((F_CPU / 8 / 32768) - 1); // set actual frequency 32787.885 Hz
    TIMSK3 = bit(OCIE3A);               // Enable compare match interrupt
}

bool ArduboyGNW::anyButtonPressed() const
{
    return m_arduboy.anyPressed(LEFT_BUTTON | RIGHT_BUTTON | UP_BUTTON | DOWN_BUTTON | A_BUTTON | B_BUTTON);
}

void ArduboyGNW::setInput(GameAndWatch::Control control, bool active)
{
    if (!m_lock) m_gnw.SetControl(control, active);
}

void ArduboyGNW::clearInput()
{
    for (int i = 0; i < GameAndWatch::Control::count; ++i)
    {
        m_gnw.SetControl(i, false);
    }
}

bool ArduboyGNW::segmentVisible(int h, int o, int s) const
{
    return m_gnw.IsSegmentVisible(h, 0, s);
}

bool ArduboyGNW::segmentVisible(int i) const
{
    return m_gnw.IsSegmentVisible(i);
}

bool ArduboyGNW::nextFrame()
{
    if (m_state != 0x00 && m_arduboy.nextFrame())
    {
        return m_gnw.HasNewFrame();
    }
    return false;
}

void ArduboyGNW::drawLCD()
{
    m_arduboy.invert(true);
    DrawGraphics();
    DrawSegments();
}

uint8_t ArduboyGNW::updateState(uint8_t nextState)
{
    // enter new state
    if (m_state != nextState)
    {
        m_state = nextState;
        m_lock = true;
        clearInput();
    }

    // unlock player input
    if (m_lock && !anyButtonPressed())
    {
        m_lock = false;
    }

    return m_state;
}

// -----------------------------------------------------------------------------

void ArduboyGNW::SetBuzzerLevel(bool level)
{
    if (m_arduboy.audio.enabled())
    {
        if (level)
            SPEAKER_1_PORT |= bit(SPEAKER_1_BIT);
        else
            SPEAKER_1_PORT &= ~bit(SPEAKER_1_BIT);
    }
}

// -----------------------------------------------------------------------------

void ArduboyGNW::DrawGraphics()
{
    for (uint8_t block = 0; block < 128; ++block)
    {
        uint16_t addr = pgm_read_word(m_graphics + sizeof(uint16_t) * block);
        if (addr == 0x0000)
        {
            // draw blank block 8x8
            uint8_t* pointer = (m_arduboy.getBuffer() + (block << 3));
            for (int i = 0; i < 8; ++i) pointer[i] = 0;
        }
        else
        {
            // draw block using sprite 8x8
            int16_t x = (block & 0x0F) << 3;
            int16_t y = (block & 0x70) >> 1;
            Sprites::drawOverwrite(x, y, m_sprites + addr, 0);
        }
    }
}

void ArduboyGNW::DrawSegments()
{
    for (uint8_t segment = 0; segment < 72; ++segment)
    {
        uint16_t addr = pgm_read_word(m_segments + sizeof(uint32_t) * segment + 2);
        if (addr != 0xFFFF && m_gnw.IsSegmentVisible(segment))
        {
            int16_t x = pgm_read_byte(m_segments + sizeof(uint32_t) * segment + 0);
            int16_t y = pgm_read_byte(m_segments + sizeof(uint32_t) * segment + 1);
            Sprites::drawSelfMasked(x, y, m_sprites + addr, 0);
        }
    }
}
