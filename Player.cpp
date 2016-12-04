#include "Player.h"
#include <string.h>
#include <stdlib.h>


using namespace std;

Player::Player()
{
	comp = false;
    Grid track;
	Grid field;
	ships = 5;
    
    setShips();
	
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
	ships = 5;
};

bool Player::turn(){
    
    bool isTurn = false;

    do
    {
			//stuff;
    } while (isTurn == false); /*stuff goes here*/

    return isTurn;
};

void Player::display(){
    track.display();
    field.display();
}


bool Player::checkIfLose()
{
		return ships == 0;
};


bool Player::attackShip(int xCoord, int yCoord){
    
    if(field.checkmove(xCoord, yCoord)){
        // Check coordinates of the ships
    }
	return true;
}

void Player::setShips(){
    
    Ship airCraftCarrier(5, "Aircraft Carrier");
    Ship battleship(4, "Battleship");
    Ship cruiser(3, "Cruiser");
    Ship submarine(3, "Submarine");
    Ship destroyer(2, "Destroyer");
    
    // Add ships into our vessel vector
    vessels.push_back(airCraftCarrier);
    vessels.push_back(battleship);
    vessels.push_back(cruiser);
    vessels.push_back(submarine);
    vessels.push_back(destroyer);
    
    for(int i = 0; i < 5; i++){
        getInputForShip(vessels[i]);
    }
    
}

bool Player::shipCanBePlaced(Ship ship, int x, int y, char direction){
    
    bool successfullyPlaced = true;
    
    if(field.board[y][x] == 0){
        
        // chosen coordinate is open, check neighbors based on direction chosen
        if(direction == 'h'){
            
            // Check horizontal neighbors
            for(int j = y; j < ship.getSize() - 1; j++){
                
                if(field.board[x][j] != 0){
                    successfullyPlaced = false;
                }
            }
        }
        else if(direction == 'v'){
            // Check vertical neighbors
            for(int i = y; i < ship.getSize() - 1; i++){
                
                if(field.board[i][y] != 0){
                    successfullyPlaced = false;
                }
            }
            
        }
        else{
            // Handle error here
        }
    }
    
    return successfullyPlaced;
}


void Player::getInputForShip(Ship ship){
    
    int x = 0;
    int y = 0;
    
    char column;
    char direction;
    
    map<char, int> letters;
    
    letters['A'] = 1;
    letters['B'] = 2;
    letters['C'] = 3;
    letters['D'] = 4;
    letters['E'] = 5;
    letters['F'] = 6;
    letters['G'] = 7;
    letters['H'] = 8;
    letters['I'] = 9;
    letters['J'] = 10;

    
    cout << "Please enter beginning coordinate for your " << ship.name << endl;
    
    // Loop until we receive valid row number
    do{
        cout << "Enter row number" << endl;
        cin >> x;
        
        if(x < 1 || x > 10){
            x = 0;
        }
        if(x + ship.getSize() - 2 > 10){
            x = 0;
        }
        
    }while(x == 0);
    
    // Loop until we receive valid row
    do{
        try{
            cout << "Enter column number " << endl;
            cin >> column;
    
            y = letters[toupper(column)];
            
            if(y + ship.getSize() > 10){
                y = 0;
            }
            
        }catch(int e){
            cout << "Not a valid column!" <<endl;
        }
    }while(y == 0);
    
    
    do{
        cout << "Do you want to place your ship vertically (v) or horizontally (h)?" <<endl;
    
        cin >> direction;
        
        if(direction != 'h' && direction != 'v'){
            direction = 'n';
        }
        
    }while(direction != 'v' && direction != 'h');
    
    if(shipCanBePlaced(ship, x, y, direction)){
        
        
        for(int i= 0; i < ship.getSize(); i++){
            
            if(direction == 'v'){
               ship.place(x, y + i);
                field.update(x, y+ i, 3);
            }
            else{
               ship.place(x + i, y);
                field.update(x + i, y, 3);
            }
            
        }
    }
}


bool Player::checkCoordsOfOtherShips(){
    
    bool noShips = true;
    
    for(int i = 0; i < vessels.size(); i++){
        
    }
    
    return noShips;
}

bool Player::checkField(int x, int y){
	
	return field.checkmove(x,y);
}





