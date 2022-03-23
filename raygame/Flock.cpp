#include "Flock.h"
#include "FineniteFlockingMachine.h"


void Flock::start()
{
	addComponent<FineniteFlockingMachine>();
}

void Flock::update(float deltaTime)
{
}
