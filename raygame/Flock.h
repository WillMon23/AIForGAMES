#pragma once
#include "Agent.h"
class Flock :
    public Agent
{
public:
    void start() override;
    void update(float deltaTime) override;

};

