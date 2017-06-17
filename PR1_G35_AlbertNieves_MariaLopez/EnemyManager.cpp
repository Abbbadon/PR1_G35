#include "EnemyManager.h"
#include "Map.h"
#include <iostream>



EnemyManager::EnemyManager(int dif, Map &myMap) 
{
	size = (rand() % 5 + 10) - dif;
	enemies = new int *[size];
	for (int i = 0; i < size; i++) 
	{
		int j;
		enemies[i] = new int[2];
		for (j = 0; j < 2; j++) 
		{
			enemies[i][j] = rand() % myMap.filas;
		}
		myMap.map[i][j] = '#';
	}
}

void EnemyManager::MoveEnemies(Map &myMap) 
{
	for (int i = 0; i < size; i++) 
	{
		myMap.map[enemies[i][0]][enemies[i][1]] = '.';
		if (int j = rand() % 100 > 50) 
		{			
			enemies[i][rand() % 1]++;
			myMap.map[enemies[i][0]][enemies[i][1]] = '#';
		}
		else 
		{
			enemies[i][rand() % 1]--;
			myMap.map[enemies[i][0]][enemies[i][1]] = '#';
		}	
	}	
}


EnemyManager::~EnemyManager()
{
}
