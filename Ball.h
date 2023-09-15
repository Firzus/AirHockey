#pragma once
#include <iostream>
#include "Entity.h"

class Ball : public Entity
{

public:
	Ball();
	virtual ~Ball();

	virtual void Draw();
	virtual void Update(sf::RenderWindow& rw);
	virtual void Render(sf::RenderWindow& rw);

	virtual void processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress);

};

