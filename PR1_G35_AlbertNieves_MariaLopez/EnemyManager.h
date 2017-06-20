#pragma once
#include "Map.h"
#include "Enemy.h"
class EnemyManager
{
public:
	int size;
	Enemy **enemies;

	void EnemyManager::MoveEnemies(Map &myMap, Player &myPlayer);
	EnemyManager(int dif, Map &myMap);
	~EnemyManager();
};

