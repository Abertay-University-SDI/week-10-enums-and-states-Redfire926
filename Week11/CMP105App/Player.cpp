#include "Player.h"

Player::Player()
{
	scale = 200.0f;
	gravity = sf::Vector2f(0, 9.8f) * scale;
	setPosition(200, 200);
	setSize(sf::Vector2f())
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
}

void Player::update(float dt)
{
	// Apply gravity force, increasing velocity
	// Move shape by new velocity
	sf::Vector2f pos = stepVelocity * dt + 0.5f * gravity * dt * dt; //ut + 1/2at^2
	stepVelocity += gravity * dt; // v = u + at note the += is not =
	setPosition(getPosition() + pos);
	// Check for collision with bottom of window
	if (getPosition().y >= window->getSize().y - getSize().y)
	{
		setPosition(getPosition().x, window->getSize().y - getSize().y);
		stepVelocity = sf::Vector2f(0, 0);
	}
}
