#include "Player.h"
#include <string.h>
#include <stdlib.h>

using namespace std;

Player::Player(){
	comp = false;
    Grid track;
	Grid field;
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
	Grid track;
	Grid field;
	int ships = 5;
	Ship vessels[5];
};

bool Player::turn(){
    
    bool isTurn = false;
    
    do
    {
			//stuff;
    } while (isTurn == false); /*stuff goes here*/

    return isTurn;
};

bool Player::checkIfLose(){
		return ships == 0;
};

