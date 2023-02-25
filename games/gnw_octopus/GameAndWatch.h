#pragma once

#include "SharpSM5A.h"

// Implementation for handheld hardware.

class GameAndWatch : public SharpSM5A::IO
{
    enum Signal { GND, VCC, MCU_R2, MCU_R3, MCU_R4 };
    enum Input  { MCU_ACL, MCU_K1, MCU_K2, MCU_K3, MCU_K4, MCU_ALPHA, MCU_BETA };

    struct Line
    {
        Line() : used(false), active(false) {}
        Line(Signal signal, Input input) : used(true), active(false), signal(signal), input(input) {}

        bool used;
        bool active;
        
        Signal signal;
        Input  input;
    };

public:
    class Handler
    {
    public:
        virtual void SetBuzzerLevel(bool level) = 0;
    };

    enum Control
    {
        TIME, GAME_B, GAME_A, ALARM,
        RIGHT_DOWN, RIGHT_UP, LEFT_DOWN, LEFT_UP,
        RIGHT, LEFT, CHEAT_A, CHEAT_B, ACL,
        count
    };

public:
    GameAndWatch(Handler* handler);

    void PowerOn(const uint8_t* controls, const uint8_t* firmware);
    void SetControl(Control control, bool active);
    void Clock();

public: // SharpSM5A::IO
    bool    RdAcl() const override;
    bool    RdAlpha() const override;
    bool    RdBeta() const override;
    uint8_t RdPortK() const override;
    void    WrPortR(uint8_t data) override;
    void    UpdateLCD(int o, uint8_t s) override;

private:
    Handler*  m_handler;
    SharpSM5A m_mcu;
    uint8_t   m_mcuPortR;

    Line m_lines[Control::count];
};
