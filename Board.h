#pragma once
#include <SFML/Graphics.hpp>

class Board
{
private:
	sf::RectangleShape hBorder;
	sf::RectangleShape wBorder;
	sf::RectangleShape background;
	sf::Color bgColor;
	sf::Color borderColor;
	sf::Vector2f bgSize;
	sf::Vector2f hSize;
	sf::Vector2f wSize;

public:
	Board();
	virtual ~Board();

	void Draw();
	void Render(sf::RenderWindow& rw);
};

