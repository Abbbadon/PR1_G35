#pragma once
class EnemyManager
{
public:
	int size;
	int **enemies;

	void EnemyManager::MoveEnemies(Map &myMap);
	EnemyManager(int dif, Map &myMap);
	~EnemyManager();
};

