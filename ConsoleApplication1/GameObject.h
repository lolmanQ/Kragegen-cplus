#pragma once
#include "Entity.h"
#include "Transform.h"
#include "Component.h"
#include <vector>

class GameObject :
	public Entity
{
public:
	GameObject();
	~GameObject();

	Transform transform;
	std::vector<Component>* components;

	template <typename T>
	void AddComponent() 
	{
		Component* component = new T();
		components->push_back(*component);
	}

	void PrintComAmount();
};