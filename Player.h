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
	Ship vessels[5];
	bool check(x, y);  // does something
	int ships;
	grid track;
	grid field;
public:
	//variables go here if any?
	bool checkiflose()
	{
		return ships == 0;
	}
	/////////////////////////////////////////////
	bool turn()
	{
		do
		{
			//stuff;
		} while (/*stuff goes here*/);
		return;
	}
};