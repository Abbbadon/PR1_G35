#pragma once
#include "Player.h"
class Map
{
public:
	Player::position jew;
	char **map;
	int filas, columnas;
	Map(int dif);
	~Map();
	void printMap();
};

