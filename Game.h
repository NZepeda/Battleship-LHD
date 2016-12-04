//
//  Game.h
//  Battleship-LHD
//

//  Copyright © 2016 csumb-lhd. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include "Player.h"

class Game {
	public:
	Game::Game();
	void start();
	
	private:
	Player p1();
	Player p2();
	void welcome();
	void play();
	int winner;
	void turn();
	void compTurn();
	int cLastX;
	int cLastY;
	
	
};



#endif /* Game_h */
