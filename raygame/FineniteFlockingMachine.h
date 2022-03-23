#pragma once
#include "Component.h"

enum State {
    IDLE,
    Follow,
    FLEE

};

class FineniteFlockingMachine :
    public Component
{
public:
    void start() override;
    void update(float deltaTime) override;
    void setState(State state) { m_currentState = state; };
    State getState() { return m_currentState; };
    
private:
    State m_currentState;
};

