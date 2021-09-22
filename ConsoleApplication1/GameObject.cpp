#include "GameObject.h"
#include "Transform.h"
#include "Component.h"
#include "ScriptibleComponent.h"
#include <iostream>

GameObject::GameObject()
{
	transform = Transform();
	components = new std::vector<Component>();
}

GameObject::~GameObject()
{
	delete components;
}

void GameObject::PrintComAmount()
{
	std::cout << components->size();
}
