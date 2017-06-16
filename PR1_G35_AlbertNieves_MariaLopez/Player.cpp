#include "Player.h"
#include "Map.h"



Player::Player(Map &myMap)
{
	player.x = myMap.columnas - 1;
	player.y = myMap.filas - 1;
}

void movement() 
{

}


Player::~Player()
{
}
