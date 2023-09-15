#pragma once
#include "Entity.h"

class Ball : public Entity
{

public:
	Ball();
	virtual ~Ball();

	virtual void Draw();
	virtual void Update();
	virtual void Render(sf::RenderWindow& rw);
};

