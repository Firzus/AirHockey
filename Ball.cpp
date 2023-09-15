#include "Ball.h"

Ball::Ball() {
	this->color = sf::Color(89, 252, 125);
	this->radius = 25;
	this->isPlayer = false;
	this->isBall = true;
	this->isOpponent = false;
}

Ball::~Ball() {}

void Ball::Draw() {
	ball.setFillColor(color);
	ball.setRadius(radius);
	ball.setPosition(225, 575);
}

void Ball::Update(sf::RenderWindow& rw) {

}

void Ball::Render(sf::RenderWindow& rw) {
	Draw();
	rw.draw(ball);
}

void Ball::processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress) {


}