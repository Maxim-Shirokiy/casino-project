#pragma once 
#include "Player.h"
//#include "Credits.h"
using namespace std;
class Dealer :public Player
{
public:
	using Player::Player;

	void seeCards();
	void game(Player);
};

