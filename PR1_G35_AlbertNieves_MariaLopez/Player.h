#pragma once
#include "Map.h"
#include "Input.hh"

class Player
{

public:	
	bool endgame;
	int x, y, dif;
	Map &map;
	

	Player::Player(Map &myMap);
	~Player();
	void movement(enti::InputKey key);
};
 
