#include "Player.h"
#include <string.h>
#include <stdlib.h>

using namespace std;

Player::Player(){
	comp = false;
	Grid track = track();
	Grid field = field();
	int ships = 5;
	Ship vessels[5];
	
};

Player::Player(int x){
	
	if (x == 1){
		comp = true;
		hunt = true;
	} else
		comp = false;
	
	comp = (x == 0);
	Grid track = track();
	Grid field = field();
	int ships = 5;
	Ship vessels[5];
};

bool Player::turn(){
		do
		{
			//stuff;
		} while (/*stuff goes here*/);
		return;
};

bool Player::checkIfLose(){
		return ships == 0;
};

