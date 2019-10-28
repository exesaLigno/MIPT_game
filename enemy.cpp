#include "classes.h"


Enemy::Enemy(float x, float y, double rotation, const char* texture_name, float speed_normal, float speed_maximum, float health):
			 Object(x, y, rotation)
{
	this -> speed_normal = speed_normal;
	this -> speed_maximum = speed_maximum;
	(this -> texture).loadFromFile(texture_name);
	(this -> sprite).setTexture(this -> texture);
	(this -> sprite).setPosition(this -> x, this -> y);
}


Enemy::~Enemy()
{
	this -> speed_normal = 0;
}
	
	
int Enemy::update()
{
	(this -> sprite).setPosition(this -> x, this -> y);
	
	return 0;
}
	



// end;
