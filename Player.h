#pragma once
#include "Entity.h"
#include <algorithm> 

class Player : public Entity
{
private:
	bool isDragging;
	sf::Vector2f minBounds;
	sf::Vector2f maxBounds;

public:
	Player(bool isOpponent);
	virtual ~Player();

	virtual void Draw();
	virtual void Update(sf::RenderWindow& rw);
	virtual void Render(sf::RenderWindow& rw);

	virtual void processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress);
};

