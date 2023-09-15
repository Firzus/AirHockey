#include "Ball.h"

Ball::Ball() {
	this->color = sf::Color(89, 252, 125);
	this->radius = 25;
	this->isPlayer = false;
	this->isBall = true;
	this->isOpponent = false;

	Draw();
}

Ball::~Ball() {}

void Ball::Draw()
{
	ball.setPosition(225, 575);
	ball.setFillColor(color);
	ball.setRadius(radius);
}

void Ball::Update(sf::RenderWindow& rw)
{
	ball.move(1.f, 0.f);

	if (true)
	{

	}
}

void Ball::Render(sf::RenderWindow& rw) 
{
	rw.draw(ball);
}

void Ball::processEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress) {


}