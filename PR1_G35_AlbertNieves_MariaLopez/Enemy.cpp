#include "Enemy.h"
#include "Map.h"
#include <iostream>

Enemy::Enemy(Map &map): map(map)
{
	x = (rand() % (map.columnas-1) + 1);
	y = (rand() % (map.filas - 1) + 1);
}


Enemy::~Enemy()
{
}
