#include "FineniteFlockingMachine.h"
#include "SeekComponent.h"
#include "FleeComponent.h"
#include "SteeringComponent.h"
#include "Actor.h"

void FineniteFlockingMachine::start()
{
	m_currentState = IDLE;
}

void FineniteFlockingMachine::update(float deltaTime)
{
	switch (getState()) {
	case IDLE:
		getOwner()->getComponent<SeekComponent>()->setSteeringForce(0);
		getOwner()->getComponent<SteeringComponent>()->setSteeringForce(0);
		setState(FOLLOW);
		break;

	case FOLLOW:
		getOwner()->getComponent<SeekComponent>()->setSteeringForce(100.0f);

	}
}
