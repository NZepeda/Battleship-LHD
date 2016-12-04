

#include "Ship.h"
#include "Grid.h"
#include <vector>

using namespace std;

#ifndef Player_h
#define Player_h


class Player
{
private:
    
    // Ship vector
	vector<Ship> vessels;
    
    // Ships left
	int ships;
    
    //
	Grid track;
	Grid field;
    
    // Is computer flag
	bool comp;
	bool hunt;
    
    void setShipCoordinate(Ship);
    bool canPlaceShip(Ship, int, int, char);
    bool checkCoordsOfOtherShips();
	
public:
    
    // Constructors
    Player();
    Player(int);
    
	bool checkField(int, int);
    void setShips();
    bool attackShip(int, int);
    bool turn();
	bool checkIfLose();
	
	
};

#endif /* Player_h */
