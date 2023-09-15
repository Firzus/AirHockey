#include "Menu.h"

Menu::Menu()
{
	// Background
	background.setSize(sf::Vector2f(500, 800));
	background.setFillColor(sf::Color(255, 238, 195));
	background.setPosition(0, 0);

	// Text
	LoadFont();

	titleText.setFont(fontBlack);
	namestext.setFont(fontBold);
	clickStartText.setFont(fontMedium);

	titleText.setString("AirHockey");
	namestext.setString("Prieu Lilian / Phuong Vy");
	clickStartText.setString("Click to start ...");

	titleText.setCharacterSize(64);
	namestext.setCharacterSize(14);
	clickStartText.setCharacterSize(24);

	titleText.setFillColor(sf::Color(80, 49, 32));
	namestext.setFillColor(sf::Color(80, 49, 32));
	clickStartText.setFillColor(sf::Color(80, 49, 32));

	titleText.setPosition(62, 128);
	namestext.setPosition(155, 224);
	clickStartText.setPosition(153, 698);

	// Sprite
	LoadSprite();

	paletSprite.setTexture(paletTexture);
	paletSprite.setColor(sf::Color(89, 252, 125));
	paletSprite.setPosition(186, 336);
}

void Menu::Render(sf::RenderWindow& rw)
{
	rw.clear();

	rw.draw(background);
	rw.draw(titleText);
	rw.draw(namestext);
	rw.draw(clickStartText);
	rw.draw(paletSprite);

	rw.display();
}

void Menu::LoadFont()
{
	if (!fontBlack.loadFromFile("asset/font/Orbitron-Black.ttf"))
	{
		std::cout << "Error Load font Black" << std::endl;
	}

	if (!fontBold.loadFromFile("asset/font/Orbitron-Bold.ttf"))
	{
		std::cout << "Error Load font Bold" << std::endl;
	}

	if (!fontMedium.loadFromFile("asset/font/Orbitron-Medium.ttf"))
	{
		std::cout << "Error Load font Medium" << std::endl;
	}
}

void Menu::LoadSprite()
{
	if (!paletTexture.loadFromFile("asset/sprite/menu_sprite.png"))
	{
		std::cout << "Error Load menu sprite" << std::endl;
	}
}
