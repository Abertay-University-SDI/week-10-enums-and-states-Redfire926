#include "Menu.h"

Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	// initialise game objects
	audio->addMusic("sfx/cantina.ogg", "cantina");
	textFont.loadFromFile("font/arial.ttf");
	
	playMessage.setPosition(300, 300);
	playMessage.setFont(textFont);
	playMessage.setCharacterSize(20);
	playMessage.setFillColor(sf::Color::White);
	playMessage.setString("Press enter to play");
}

Menu::~Menu()
{

}

// handle user input
void Menu::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Enter))
	{
		gameState->setCurrentState(State::LEVEL);
	}
}

// Update game objects
void Menu::update(float dt)
{

}

// Render menu
void Menu::render()
{
	beginDraw();
	window->draw(playMessage);


	endDraw();
}
