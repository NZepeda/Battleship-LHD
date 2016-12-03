//
//  Grid.cpp
//  Battleship-LHD
//
//  Created by Nestor Zepeda on 12/3/16.
//  Copyright © 2016 csumb-lhd. All rights reserved.
//

#include "Grid.h"


    
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
   
    
    board[0][0] = ' ';  //sets empty spot on corner
}


    void Grid::display()
    {
        for (int k = 1; k<11; k++){  //for loop for num 1-10
        
        board[0][k]=k;
            board[k][0]= abc[k];
        }
    
        for (int i=0; i<11; i++){   //for letters on side of grid
            //cout << abc[i];
            
            for (int j=0; j < 11; j++){
                cout <<letters[board[i][j]];
            }
        }
    
    }

    //

    bool Grid:: checkmove( int x, int y)   //check for move availability
    {
        
        if (board[x][y] != 'H'||'M')
        {
            return true;
        }
        
        return false;
    
    }

    void Grid::update(int x, int y, int z)
    {
        board[x][y]=letters[z];
    }

#endif /* Grid_h */
