#include "RotateComponent.h"
#include "Transform2D.h"
#include "InputComponent.h"
#include "Actor.h"
void RotateComponent::update(float deltaTime)
{
	Component::update(deltaTime);
	getOwner()->getTransform()->rotate(deltaTime * 100);
}
