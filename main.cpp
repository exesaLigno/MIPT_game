#include <SFML/Graphics.hpp>
#include <cmath>

#include "classes.h"


using namespace sf;

 
int main(const int argc, const char** argv)
{
	Clock clock;
    int H = 400;
    int W = 400;

    if (argc == 3)
    {
        H = atoi(argv[1]);
        W = atoi(argv[2]);
    }
    RenderWindow window(VideoMode(H, W), "GAME", Style::Fullscreen);
    
//    Texture herotexture;
//    herotexture.loadFromFile("Textures/Hero.png");
//    Sprite herosprite;
//    herosprite.setTexture(herotexture);
//    herosprite.setPosition(250,250);
//    
//	Sprite strangersprite;
//	strangersprite.setTexture(herotexture);
//	strangersprite.setPosition(400, 100);
//	strangersprite.setColor(Color::Red);

	Enemy player(250, 250, 0, "Textures/Hero.png", 5, 5, 10);
	Enemy enemy(300, 400, 0, "Textures/Hero.old.png", 5, 5, 10);
 
    while (window.isOpen())
    {
    	float time = clock.getElapsedTime().asMicroseconds(); //дать прошедшее время в микросекундах
		clock.restart(); //перезагружает время
		time = time/800; //скорость игры
		
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        
        if (Keyboard::isKeyPressed(Keyboard::A)) 
            player.move(-0.1*time, 0);
        if (Keyboard::isKeyPressed(Keyboard::D)) 
            player.move(0.1*time, 0);
        if (Keyboard::isKeyPressed(Keyboard::W)) 
            player.move(0, -0.1*time);
        if (Keyboard::isKeyPressed(Keyboard::S)) 
            player.move(0, 0.1*time); 
            
        if (abs(player.getPosition().x - 400) < 50 and abs(player.getPosition().y - 100) < 50)
        {
        	printf("You near the enemy!\n");
       	}
       	else
       		printf("\n");
       		
       	
        window.clear();
        window.display();
    }
 
    return 0;
}





