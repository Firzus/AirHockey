#include "Ball.h"

Ball::Ball() {
	this->color = sf::Color(89, 252, 125);
	this->radius = 25;
}

Ball::~Ball() {}

void Ball::Draw() {
	ball.setFillColor(color);
	ball.setRadius(radius);
	ball.setPosition(225, 375);
}

void Ball::Update() {

}

void Ball::Render(sf::RenderWindow& rw) {
	Draw();
	rw.draw(ball);
}