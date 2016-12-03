#include "Player.h"
#include <string.h>

using namespace std;

Player::Player(){
	comp = false;
	Grid track = track();
	Grid field = field();
	int ships = 5;
	Ship vessels[5];
	
};

Player::Player(int x){
	
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