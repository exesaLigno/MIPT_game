#include "game.h"

Game::Game(int mode, int height, int width, int display_style)
{
	this -> window = new sf::RenderWindow(sf::VideoMode(height, width), "GAME", display_style);
}


Game::~Game()
{
	this -> window = 0;
}


void Game::start()
{
	while(this -> window -> isOpen())
	{
		
		sf::Event event;
		
		while (this -> window -> pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				this -> window -> close();
		}
		
	}
}
