//
//  Player.h
//  Battleship-LHD
//
//  Created by Nestor Zepeda on 12/3/16.
//  Copyright © 2016 csumb-lhd. All rights reserved.
//

#ifndef Player_h
#define Player_h
#endif /* Player_h */

class player
{
private:
	Player::Player();
	Player::Player(int);
	Ship vessels[5];
	int ships;
	Grid track;
	Grid field;
	bool comp;
public:
	
	bool turn();
	bool checkIfLose();
	
	
};