//
//  Grid.h
//  Battleship-LHD
//
//  Created by Nestor Zepeda on 12/3/16.
//  Copyright © 2016 csumb-lhd. All rights reserved.
//
#include <string>
#include <map>
#include <iostream>
using namespace std;

#ifndef Grid_h
#define Grid_h

#define ROW 10  //defining number of rows
#define COL 10  //defining number of columns



class Grid
{
private:
    
    char letters[8];
    char abc[10];
    char numberside[10];
    
    void initializeGrid();
    
public:
    Grid();     //constructor

    void update(int x, int y, int z);
    void display();
    bool checkmove(int x,int y);
    
    int board[ROW][COL];
};

#endif /* Grid_h */
