#pragma once
#include "Map.h"
#include "Player.h"

class Enemy
{
public:
	int x, y;
	Map &map;

	Enemy(Map &map);
	~Enemy();
};

