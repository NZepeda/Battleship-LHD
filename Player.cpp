#include "Player.h"
#include <string.h>
#include <stdlib.h>

using namespace std;

Player::Player()
{
	comp = false;
    Grid track;
	Grid field;
	int ships = 5;
	Ship vessels[5];
	
};

Player::Player(int x)
{
	
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


bool Player::checkIfLose()
{
		return ships == 0;
};


void Player::attackShip(int xCoord, int yCoord){
    
    if(field.checkmove(xCoord, yCoord)){
        // Check coordinates of the ships
    }
}

void Player::setShips(){
    
    int x, y;
    
    Ship airCraftCarrier(5, "Aircraft Carrier");
    Ship battleship(4, "Battleship");
    Ship cruiser(3, "Cruiser");
    Ship submarine(3, "Submarine");
    Ship destroyer(2, "Destroyer");
    
    
    cout << "Select coordinate for your Carrier ship (size: 5)" << endl;
    cin >>
    
}




