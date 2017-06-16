#pragma once
#include "Header.h"
class Map
{
public:
	position jew;
	char **map;
	int filas, columnas;
	Map(int dif);
	void printMap();
	~Map();
	
};

