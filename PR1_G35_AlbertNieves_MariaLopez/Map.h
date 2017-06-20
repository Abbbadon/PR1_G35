#pragma once
class Map
{
public:
	int jewX, jewY;
	char **map;
	int filas, columnas;
	Map(int dif);
	void printMap();
	bool Map::IsOutOfLimits(int x, int y);
	~Map();
	
};

