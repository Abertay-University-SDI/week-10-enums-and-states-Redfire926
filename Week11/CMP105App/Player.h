#pragma once
#include "Framework/GameObject.h"
class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt) override;
	void update(float dt) override;

private:
	float scale;
	sf::Vector2f gravity;
	sf::Vector2f stepVelocity;

};

