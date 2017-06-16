#include <iostream>
#include "Map.h"
#include "Header.h"


position jew;
Map::Map(int dif)
{
	
	filas = (rand() % 25 + 25)/dif - ((rand() % 25 + 25) % dif);
	columnas = (rand() % 25 + 25) / dif - ((rand() % 25 + 25) % dif);

	jew.x = rand() % filas;
	jew.y = rand() % columnas;
	while (jew.x == 0 && jew.y == 0)
	{
		jew.x = rand() % filas;
		jew.y = rand() % columnas;
	}

	map = new char *[filas];
	for (int i = 0; i < filas; i++)
	{ 
		map[i] = new char[columnas];
		for (int j = 0; j < columnas; j++)
		{
			if (i == jew.x && j == jew.y) 
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


Map::~Map()
{
	for (int i = 0; i < filas; i++)
	{
		delete[]map[i];
	}
	delete[]map;
}
