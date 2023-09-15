#include "Player.h"

Player::Player(bool isOpponent) {
	this->size = sf::Vector2f(100, 30);
	this->isOpponent = isOpponent;
	this->isDragging = isDragging;
	this->isPlayer = true;
	this->isBall = false;
}

Player::~Player() {}

void Player::Draw() {
	if (isOpponent) {
		color = sf::Color(255, 188, 205);
		player.setPosition(sf::Vector2f(200, 0));
	}
	else {
		color = sf::Color(62, 228, 255);
		player.setPosition(sf::Vector2f(200, 770));
	}

	player.setFillColor(color);
	player.setSize(size);
}

void Player::Update(sf::RenderWindow& rw) {
	if (isDragging) {
		sf::Vector2i mousePos = sf::Mouse::getPosition(rw);
		player.setPosition(static_cast<sf::Vector2f>(mousePos));
	}
}

void Player::Render(sf::RenderWindow& rw) {
	Draw();
	rw.draw(player);
}

void Player::processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress) {
	if (isPress) {
		cout << "press" << endl;
		if (mouse == sf::Mouse::Button::Left) {
			cout << "left click" << endl;
			sf::Vector2i mousePos = sf::Mouse::getPosition(rw);
			sf::Vector2f playerPos = player.getPosition();
			double distance = sqrt(pow(mousePos.x - playerPos.x, 2) + pow(mousePos.y - playerPos.y, 2));
			if (distance <= radius) isDragging = true;
			else false;
		}
	}
}