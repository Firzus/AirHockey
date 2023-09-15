#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

class Menu
{
private:
	sf::RectangleShape background;

	sf::Font fontBlack;
	sf::Font fontBold;
	sf::Font fontMedium;

	sf::Text titleText;
	sf::Text namestext;
	sf::Text clickStartText;
	
	sf::Texture paletTexture;
	sf::Sprite paletSprite;

public:
	Menu();

	void Render(sf::RenderWindow& rw);
	
	void LoadFont();
	void LoadSprite();
};

