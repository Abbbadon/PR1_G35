#pragma once
#include "Map.h"

class Player
{

public:	
	
	struct position { int x; int y; };
	position player;
	position keyArr[4]{ w, a, s, d };
	position w = { 0, 1 };
	position a = { -1, 0 };
	position s = { 0, -1 };
	position d = { 1, 0 };

	Player(Map &myMap);
	~Player();
};

