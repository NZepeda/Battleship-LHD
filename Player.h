

#include "Ship.h"
#include "Grid.h"
#include <vector>

using namespace std;

#ifndef Player_h
#define Player_h


class Player
{
private:
    // Constructors
	Player();
	Player(int);
    
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
    void placeShip(Ship, int, int);
    bool checkCoordsOfOtherShips();
	
public:
    void setShips();
    void attackShip(int, int);
    bool turn();
	bool checkIfLose();
	
	
};

#endif /* Player_h */
