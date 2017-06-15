#pragma once
#include "Player.h"
class Map
{
public:
	Player myPlayer;
	Player::position jew;
	char **map;
	int filas, columnas;
	int dif;
	Map();
	~Map();
	void printMap();
};

