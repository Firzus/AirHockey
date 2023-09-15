#pragma once
#include "Entity.h"

class Player : public Entity
{
private:
	bool isOpponent;

public:
	Player(bool isOpponent);
	virtual ~Player();

	virtual void Draw();
	virtual void Update();
	virtual void Render(sf::RenderWindow& rw);
};

