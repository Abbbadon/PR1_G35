#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Input.hh"
#include "EnemyManager.h"
#include "Enemy.h"
#include <ctime>
#include <Windows.h>


int main()
{
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	srand(time(nullptr));

	char dif;
	bool win = false;

	enti::InputKey key;

	std::cout << "Please choose difficulty by pressing the number value." << std::endl << "The options are:" << std::endl << std::endl << "1 - Easy" << std::endl << "2 - Medium" << std::endl << "3 - Hard" << std::endl;
	std::cin >> dif;

	while (dif != '1' && dif != '2' && dif != '3')
	{
		system("cls");
		std::cout << " You did not press one of the options." << std::endl << std::endl << "Please choose difficulty by pressing the number value." << std::endl << "The options are:" << std::endl << std::endl << "1 - Easy" << std::endl << "2 - Medium" << std::endl << "3 - Hard" << std::endl;
		std::cin >> dif;
	}

	dif = static_cast<int>(dif) - 48;
	
	Map myMap(dif);
	Player myPlayer(myMap);
	EnemyManager enemies(dif, myMap);
	myMap.printMap();
	
	while (!myPlayer.endgame && !win)
	{
		key = enti::getInputKey();
		if (key != enti::InputKey::NONE)
		{
			system("cls");
			myPlayer.movement(key);
			enemies.MoveEnemies(myMap, myPlayer);
			myMap.printMap();
			if (myPlayer.x == myMap.jewX && myPlayer.y == myMap.jewY)
			{
				win = true;
			}
		}
	}
	system("cls");
	if (win)
	{
		std::cout << "You won!";
	}
	else
	{
		std::cout << "You lost!";
	}

	return 0;
}