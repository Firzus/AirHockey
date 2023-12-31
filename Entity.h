#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Entity
{
protected:
	sf::CircleShape ball;
	sf::RectangleShape player;
	sf::Vector2f pos;

	float radius;
	sf::Vector2f size;
	sf::Color color;
	sf::Vector2f position;

	bool isBall;
	bool isPlayer;
	bool isOpponent;

public:
	Entity();
	virtual ~Entity();

	virtual void Draw() = 0;
	virtual void Update(sf::RenderWindow& rw) = 0;
	virtual void Render(sf::RenderWindow& rw) = 0;

	bool getBall() { return isBall; }
	bool getPlayer() { return isPlayer; }
	bool getOpponent() { return isOpponent; }

	sf::Vector2f getPosition();

	virtual void processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress) = 0;
};