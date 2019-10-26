#include <SFML/Graphics.hpp>
#include <cmath>


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
    RenderWindow window(VideoMode(H, W), "GAME");
    
    Texture herotexture;
    herotexture.loadFromFile("Textures/Hero.png");
    Sprite herosprite;
    herosprite.setTexture(herotexture);
    herosprite.setPosition(250,250);
    
	Sprite strangersprite;
	strangersprite.setTexture(herotexture);
	strangersprite.setPosition(400, 100);
	strangersprite.setColor(Color::Red);
 
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
            herosprite.move(-0.1*time, 0);
        if (Keyboard::isKeyPressed(Keyboard::D)) 
            herosprite.move(0.1*time, 0);
        if (Keyboard::isKeyPressed(Keyboard::W)) 
            herosprite.move(0, -0.1*time);
        if (Keyboard::isKeyPressed(Keyboard::S)) 
            herosprite.move(0, 0.1*time); 
            
        if (abs(herosprite.getPosition().x - 400) < 50 and abs(herosprite.getPosition().y - 100) < 50)
        {
        	printf("You near the enemy!\n");
       	}
       	else
       		printf("\n");
       		
       	
        window.clear();
        window.draw(herosprite);
        window.draw(strangersprite);
        window.display();
    }
 
    return 0;
}





