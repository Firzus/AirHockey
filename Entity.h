#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
protected:
	sf::CircleShape ball;
	sf::RectangleShape player;

	float radius;
	sf::Vector2f size;
	sf::Color color;

public:
	virtual void Draw() = 0;
	virtual void Update() = 0;
	virtual void Render(sf::RenderWindow& rw) = 0;

};