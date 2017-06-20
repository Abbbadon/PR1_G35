#include <iostream>
#include "Map.h"

Map::Map(int dif)
{
	
	filas = (rand() % 25 + 25)/dif - ((rand() % 25 + 25) % dif);
	columnas = (rand() % 25 + 25) / dif - ((rand() % 25 + 25) % dif);

	jewX= rand() % filas;
	jewY = rand() % columnas;
	while (jewY == 0 && jewX == 0)
	{
		jewY = rand() % filas;
		jewX = rand() % columnas;
	}

	map = new char *[filas];
	for (int i = 0; i < filas; i++)
	{ 
		map[i] = new char[columnas];
		for (int j = 0; j < columnas; j++)
		{
			if (i == jewX && j == jewY) 
			{
				map[i][j] = '$';
			}			
			else 
			{
				map[i][j] = '.';
			}			
		}
	}	
}

void Map::printMap()
{
	system("cls");
	for (int i = 0; i < filas; i++)
	{		
		for (int j = 0; j < columnas; j++)
		{
			std::cout << map[i][j];
		}
		std::cout << std::endl;
	}
}

bool Map::IsOutOfLimits(int x, int y)
{
	return x >= filas || x < 0 || y >= columnas || y < 0;
}


Map::~Map()
{
	for (int i = 0; i < filas; i++)
	{
		delete[]map[i];
	}
	delete[]map;
}
