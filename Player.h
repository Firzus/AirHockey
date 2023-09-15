#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	virtual ~Player();

	virtual void Update();
	virtual void Render(sf::RenderWindow& rw);
};

