#pragma once

#include <SFML/Graphics.hpp>


class Position
{
public:
	float x;
	float y;
	double rotation;
	
	int getSector();
	
	Position(float x, float y, double rotation);
	Position();
};



class Object
{
protected:
	float x;
	float y;
	double rotation;
	
public:
	Object(float x, float y, double rotation);
	Object();
	
	Position getPosition();
	int setPosition(float x, float y);
	int setPosition(Position pos);
	int move(float delta_x, float delta_y);
	int setRotation(double rotation);
	int rotate(double delta_rotation);
	
};



class Enemy : public Object
{
protected:
	sf::Sprite sprite;
	sf::Texture texture;
	float speed_normal;
	float speed_maximum;
	float health;
	
public:
	Enemy(float x, float y, double rotation, const char* texture_name, float speed_normal, float speed_maximum, float health);
	~Enemy();
	int update();
};



class Player : public Enemy
{
	int mouse; // Свойства присущие игроку
};



class Camera : public Object
{
	int camera; // Свойства присущие камере
};



