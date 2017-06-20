#include "Enemy.h"
#include "Map.h"
#include <iostream>

Enemy::Enemy(Map &map): map(map)
{
	y = (rand() % (map.columnas-1) + 1);
	x = (rand() % (map.filas - 1) + 1);
}


Enemy::~Enemy()
{
}
