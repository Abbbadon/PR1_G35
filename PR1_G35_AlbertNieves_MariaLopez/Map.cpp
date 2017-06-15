#include "Map.h"
#include "Player.h"
#include <iostream>

Map::Map()
{
	filas = rand() % (50 / dif - 25 / dif) + 25 / dif;
	columnas = rand() % (50 / dif - 25 / dif) + 25 / dif;

	jew.x = rand() % filas;
	jew.y = rand() % columnas;

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
			else if (i == myPlayer.player.x && j == myPlayer.player.y)
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
	}
}


Map::~Map()
{
}
