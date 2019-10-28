#include "classes.h"


Object::Object(float x, float y, double rotation)
{
	this -> x = x;
	this -> y = y;
	this -> rotation = rotation;
}

Object::Object()
{
	this -> x = 0;
	this -> y = 0;
	this -> rotation = 0;
}

Position Object::getPosition()
{
	Position test(0,0,0);
	return test;
}

int Object::setPosition(float x, float y)
{
	this -> x = x;
	this -> y = y;
	
	return 0;
}

int Object::setPosition(Position position)
{
	this -> x = position.x;
	this -> y = position.y;
	this -> rotation = position.rotation;
	
	return 0;
}

int Object::move(float delta_x, float delta_y)
{
	this -> x += delta_x;
	this -> y += delta_y;
	
	return 0;
}

int Object::setRotation(double rotation)
{
	this -> rotation = rotation;
	
	return 0;
}

int Object::rotate(double delta_rotation)
{
	this -> rotation += delta_rotation;
	
	return 0;
}
