#include "EnemyManager.h"
#include "Map.h"
#include "Enemy.h"
#include <iostream>

EnemyManager::EnemyManager(int dif, Map &myMap) 
{
	size = (rand() % 5 + 10) - dif;
	enemies = new Enemy *[size];

	for (int i = 0; i < size; i++) 
	{
		enemies[i] = new Enemy(myMap);
		myMap.map[enemies[i]->x][enemies[i]->y] = '#';
	}
}

void EnemyManager::MoveEnemies(Map &myMap, Player &myPlayer) 
{
	for (int i = 0; i < size; i++)
	{
		int movement = rand() % 4;
		myMap.map[enemies[i]->x][enemies[i]->y] = '.';
		switch (movement)
		{
		case 0:
			if (/*!myMap.IsOutOfLimits(enemies[i]->x + 1, enemies[i]->y)*/ enemies[i]->x < myMap.filas - 1 && !(enemies[i]->x + 1 == myMap.jewX && enemies[i]->y == myMap.jewY))
			enemies[i]->x++;
			break;
		case 1:
			if (/*!myMap.IsOutOfLimits(enemies[i]->x - 1, enemies[i]->y)*/ enemies[i]->x > 0 && !(enemies[i]->x - 1 == myMap.jewX && enemies[i]->y == myMap.jewY))
			enemies[i]->x--;
			break;
		case 2:
			if (/*!myMap.IsOutOfLimits(enemies[i]->x, enemies[i]->y+1)*/ enemies[i]->y < myMap.columnas - 1 && !(enemies[i]->x == myMap.jewX && enemies[i]->y + 1 == myMap.jewY))
			enemies[i]->y++;
			break;
		case 3:
			if (/*!myMap.IsOutOfLimits(enemies[i]->x, enemies[i]->y-1) */ enemies[i]-> y > 0 && !(enemies[i]->x == myMap.jewX && enemies[i]->y - 1 == myMap.jewY))
			enemies[i]->y--;
			break;
		}
		myMap.map[enemies[i]->x][enemies[i]->y] = '#';
		if (myPlayer.x == enemies[i]->x && myPlayer.y == enemies[i]->y)
		{
			myPlayer.endgame = true;
		}
	}
}


EnemyManager::~EnemyManager()
{
}
