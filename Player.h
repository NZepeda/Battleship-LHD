

#include "Ship.h"
#include "Grid.h"
#include <vector>

using namespace std;

#ifndef Player_h
#define Player_h


class Player
{
private:
    bool shipCanBePlaced(Ship, int, int, char);

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
    bool checkCoordsOfOtherShips();
    
	
public:
    
    // Constructors
    Player();
    Player(int);
    
    void display();
	bool checkField(int, int);
    void setShips();
    bool attackShip(int, int);
    bool turn();
	bool checkIfLose();
    void getInputForShip(Ship ship);
	
};

#endif /* Player_h */
