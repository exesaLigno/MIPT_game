#include "classes.h"

#include <iostream>

Position::Position(float x, float y, double rotation)
{
	this -> x = x;
	this -> y = y;
	this -> rotation = rotation;
}

Position::Position()
{
	this -> x = 0;
	this -> y = 0;
	this -> rotation = 0;
}

int Position::getSector()
{
	return 0;
}


//----------------------------------------//


Object::Object(float x, float y, double rotation)
{
	Position new_position(x, y, rotation);
	this -> position = new_position;
	std::cout << "This is object constructor" << std::endl;
}

Object::Object()
{
	Position new_position(0, 0, 0);
	this -> position = new_position;
	std::cout << "This is object constructor" << std::endl;
}

Position Object::getPosition()
{
	Position test(0,0,0);
	return test;
}

int Object::setPosition(float x, float y)
{
	(this -> position).x = x;
	(this -> position).y = y;
	
	return 0;
}

int Object::setPosition(Position position)
{
	this -> position = position;
	
	return 0;
}

int Object::move(float delta_x, float delta_y)
{
	(this -> position).x += delta_x;
	(this -> position).y += delta_y;
	
	return 0;
}

int Object::setRotation(double rotation)
{
	(this -> position).rotation = rotation;
	
	return 0;
}

int Object::rotate(double delta_rotation)
{
	(this -> position).rotation += delta_rotation;
	
	return 0;
}


//----------------------------------------//



	



// end;
