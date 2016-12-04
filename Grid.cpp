//
//  Grid.cpp
//  Battleship-LHD
//
//  Created by Nestor Zepeda on 12/3/16.
//  Copyright © 2016 csumb-lhd. All rights reserved.
//

#include "Grid.h"
#include <iostream>

    
Grid::Grid()
{
    //letter definitions
    
    letters[0] = '0';   //empty
    letters[1] = 'H';   //hit
    letters[2] = 'M';   //miss
    letters[3] = 'A';   //Aircraft Carrier
    letters[4] = 'B';   //Battleship
    letters[5] = 'C';   //Cruiser
    letters[6] = 'D';   //Destroyer
    letters[7] = 'S';   //Submarine
    
    char abc[11]={'0','A', 'B', 'C', 'D', 'E','F','G','H', 'I', 'J'};
   
    initializeGrid();
    
}

// Initializes our grid 
void Grid::initializeGrid(){
    
    for(int i = 0; i < 10; i++){
        
        for(int j = 0; j < 10; j++){
            board[i][j] = 0;
        }
    }
    
}


    void Grid::display()
    {
		cout << " ";
        for (int k = 1; k<11; k++){  //for loop for num 1-10
        
            cout << k << " ";
        }
		
		cout << endl;
		// Make the column headers a little seperated from the grid.
		cout << "-------------------------------------\n";
        
		for (int i=0; i<10; i++){   //for letters on side of grid
            cout << abc[i+1] << "|";
            
            for (int j=0; j < 11; j++){
                cout << " " << letters[board[i][j]];
            }
			cout << "|\n";
        }
    
		cout << "--------------------------------------\n";
		
    }

    bool Grid:: checkmove( int x, int y)   //check for move availability
    {
        
        if (board[y][x] != 1 || board[y][x] != 2)
        {
            return true;
        }
        
        return false;
    
    }

	// updates the grid at the x y coordinate to the number stored in z
	// z represents the cooresponding letter in the letters array
    void Grid::update(int x, int y, int z)
    {
        board[y][x] = z;
    }

