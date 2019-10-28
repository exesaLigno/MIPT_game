#include "classes.h"


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
