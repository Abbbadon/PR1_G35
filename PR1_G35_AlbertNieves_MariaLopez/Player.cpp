#include "Map.h"
#include "Player.h"
#include "Input.hh"


Player::Player(Map &map): map(map), x{ 0 }, y{ 0 }
{
	endgame = false;
}

void Player::movement(enti::InputKey key)
{
	map.map[x][y] = '@';

	switch (key)
	{
	case enti::InputKey::NONE:
		break;
	case enti::InputKey::W:
		if (x > 0)
		{
			map.map[x][y] = '.';
			x--;
			map.map[x][y] = '@';
		}
		break;
	case enti::InputKey::A:
		if (y > 0)
		{
			map.map[x][y] = '.';
			y--;
			map.map[x][y] = '@';
		}
		break;
	case enti::InputKey::S:
		if (x < map.filas - 1)
		{
			map.map[x][y] = '.';
			x++;
			map.map[x][y] = '@';
		}
		break;
	case enti::InputKey::D:
		if (y <map.columnas - 1)
		{
			map.map[x][y] = '.';
			y++;
			map.map[x][y] = '@';
		}
		break;
	case enti::InputKey::ENTER:
		break;
	case enti::InputKey::ESC:
		endgame = true;
		break;
	default:
		break;
	}
}


Player::~Player()
{
}
