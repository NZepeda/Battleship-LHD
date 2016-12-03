

#include "Ship.h"
#include "Grid.h"

using namespace std;

#ifndef Player_h
#define Player_h


class Player
{
private:
    // Constructors
	Player();
	Player(int);
    
    // Ship array
	Ship vessels[5];
    
    // Ships left
	int ships;
    
    //
	Grid track;
	Grid field;
    
    // Is computer flag
	bool comp;
public:
	
	bool turn();
	bool checkIfLose();
	
	
};

#endif /* Player_h */
