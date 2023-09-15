#include "Player.h"

Player::Player(bool isOpponent) {
	this->isOpponent = isOpponent;
	this->size = sf::Vector2f(100, 30);
}

Player::~Player() {}

void Player::Draw() {
	if (isOpponent) {
		color = sf::Color(255, 188, 205);
		player.setPosition(sf::Vector2f(200, 50));
	}
	else {
		color = sf::Color(62, 228, 255);
		player.setPosition(sf::Vector2f(200, 720));
	}

	player.setFillColor(color);
	player.setSize(size);
}

void Player::Update() {

}

void Player::Render(sf::RenderWindow& rw) {
	Draw();
	rw.draw(player);
}