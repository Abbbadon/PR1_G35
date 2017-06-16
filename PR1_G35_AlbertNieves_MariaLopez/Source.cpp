#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Input.hh"
#include <ctime>
#include <Windows.h>


int main()
{
	//system("mode 650");
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	srand(time(nullptr));

	char dif;
	
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
	myMap.printMap();

	while (myPlayer.x != myMap.jewX || myPlayer.y != myMap.jewY)
	{
		key = enti::getInputKey();
		if (key != enti::InputKey::NONE)
		{
			system("cls");
			myPlayer.movement(key);
			myMap.printMap();
		}
	}
	system("cls");
	std::cout << "You won!";

	return 0;
}