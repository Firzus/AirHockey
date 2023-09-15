#include "Board.h"

Board::Board() {
	this->bgColor = sf::Color(255, 238, 195);
	this->borderColor = sf::Color(80, 49, 32);
	this->bgSize = sf::Vector2f(500, 800);
	this->hSize = sf::Vector2f(30, 800);
	this->wSize = sf::Vector2f(440, 5);
	Draw();
}

Board::~Board() {}

void Board::Draw() {
	background.setFillColor(bgColor);
	background.setSize(bgSize);

	hBorder.setFillColor(borderColor);
	hBorder.setSize(hSize);

	wBorder.setFillColor(borderColor);
	wBorder.setSize(wSize);
}

void Board::Render(sf::RenderWindow& rw) {
	rw.draw(background);

	sf::RectangleShape leftHeightBorder = hBorder;
	sf::RectangleShape rightHeightBorder = hBorder;

	sf::RectangleShape topWidthBorder = wBorder;
	sf::RectangleShape midWidthBorder = wBorder;
	sf::RectangleShape botWidthBorder = wBorder;

	leftHeightBorder.setPosition(0, 0);
	rightHeightBorder.setPosition(470, 0);

	topWidthBorder.setPosition(30, 200);
	midWidthBorder.setPosition(30, 398);
	botWidthBorder.setPosition(30, 595);

	rw.draw(leftHeightBorder);
	rw.draw(rightHeightBorder);

	rw.draw(topWidthBorder);
	rw.draw(midWidthBorder);
	rw.draw(botWidthBorder);
}
