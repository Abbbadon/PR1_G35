#pragma once
#include "Map.h"
#include "Input.hh"

class Player
{

public:	
	bool endgame;
	int x, y, dif;
	Map &map;
	

	Player::Player(Map &map);
	~Player();
	void movement(enti::InputKey key);
};
 
