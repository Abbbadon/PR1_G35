#include "Map.h"
#include "Player.h"
#include "Header.h"
#include <iostream>

int main()
{
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
	Player myPlayer;
	myMap.printMap();
	return 0;
}