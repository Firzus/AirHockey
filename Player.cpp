#include "Player.h"

Player::Player(bool isOpponent) {
	this->size = sf::Vector2f(100, 30);
	this->isOpponent = isOpponent;
	this->isDragging = false;
	this->isPlayer = true;
	this->isBall = false;

	if (isOpponent) {
		this->color = sf::Color(255, 188, 205);
		this->pos = sf::Vector2f(200, 0);
	}
	else {
		this->color = sf::Color(62, 228, 255);
		this-> pos = sf::Vector2f(200, 770);
	}

	Draw();
}

Player::~Player() {}

void Player::Draw() {
	player.setPosition(pos);
	player.setFillColor(color);
	player.setSize(size);
}

void Player::Update(sf::RenderWindow& rw) {
	if (isDragging) {
		sf::Vector2i mousePos = sf::Mouse::getPosition(rw);
		cout << mousePos.x << ", " << mousePos.y << endl;
		player.setPosition(sf::Vector2f(mousePos.x, mousePos.y));
	}
}

void Player::Render(sf::RenderWindow& rw) {
	rw.draw(player);
}

void Player::processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress) {
	if (isPress) {
		if (mouse == sf::Mouse::Button::Left) {
			sf::Vector2i mousePos = sf::Mouse::getPosition(rw);
			sf::FloatRect playerBounds = player.getGlobalBounds();
			if (playerBounds.contains(static_cast<sf::Vector2f>(mousePos))) {
				isDragging = true;
			}
		}
	}
	else {
		isDragging = false;
	}


}