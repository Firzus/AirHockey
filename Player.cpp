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
	this->minBounds = sf::Vector2f(30, 600);
	this->maxBounds = sf::Vector2f(minBounds.x + 440, minBounds.y + 200);

	this->oppMinBounds = sf::Vector2f(30, 0);
	this->oppMaxBounds = sf::Vector2f(minBounds.x + 440, minBounds.y + 200);

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
		float x = max(minBounds.x, min(maxBounds.x - size.x, static_cast<float>(mousePos.x)));
		float y = max(minBounds.y, min(maxBounds.y - size.y, static_cast<float>(mousePos.y)));
		sf::Vector2f newPos(x, y);
		player.setPosition(newPos);
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
				rw.setMouseCursorVisible(false);
			}
		}
	}
	else {
		isDragging = false;
		rw.setMouseCursorVisible(true);
	}
}
