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
	background.setPosition(0, 0);
	background.setSize(bgSize);

	hBorder.setFillColor(borderColor);
	hBorder.setSize(hSize);

	wBorder.setFillColor(borderColor);
	wBorder.setSize(wSize);

}

void Board::Render(sf::RenderWindow& rw) {
	rw.draw(background);
	rw.draw(hBorder);
	rw.draw(wBorder);

}
