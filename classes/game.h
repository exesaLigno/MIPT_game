#pragma once

#include "objects.h"
#include <SFML/Graphics.hpp>

class Game
{
protected:
	sf::RenderWindow window;
	Enemy* enemies;
	
public:
	Game(int mode, int height, int width, int display_style);
	~Game();
	void update();
	void renderFrame();
};
