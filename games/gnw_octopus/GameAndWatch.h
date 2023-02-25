#pragma once

#include "SharpSM5A.h"

// Implementation for handheld hardware.

class GameAndWatch : public SharpSM5A::IO
{
public:
    GameAndWatch();

    void powerOn(const uint8_t* controls, const uint8_t* firmware);
    // TODO

public:
    bool    RdAcl() const override;
    bool    RdAlpha() const override;
    bool    RdBeta() const override;
    uint8_t RdPortK() const override;
    void    WrPortR(uint8_t data) override;
    void    UpdateLCD(int o, uint8_t s) override;

private:
    SharpSM5A m_mcu;
};
