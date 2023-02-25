#include "GameAndWatch.h"

GameAndWatch::GameAndWatch()
    : m_mcu(this)
{
}

void GameAndWatch::powerOn(const uint8_t* controls, const uint8_t* firmware)
{
    // TODO

    m_mcu.PowerOn(firmware);
}

bool GameAndWatch::RdAcl() const
{
    // TODO
}

bool GameAndWatch::RdAlpha() const
{
    // TODO
}

bool GameAndWatch::RdBeta() const
{
    // TODO
}

uint8_t GameAndWatch::RdPortK() const
{
    // TODO
}

void GameAndWatch::WrPortR(uint8_t data)
{
    // TODO
}

void GameAndWatch::UpdateLCD(int o, uint8_t s)
{
    // TODO
}
