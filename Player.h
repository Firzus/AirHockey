#pragma once
#include "Entity.h"

class Player : public Entity
{
private:
	bool isDragging;

public:
	Player(bool isOpponent);
	virtual ~Player();

	virtual void Draw();
	virtual void Update(sf::RenderWindow& rw);
	virtual void Render(sf::RenderWindow& rw);

	virtual void processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress);
};

