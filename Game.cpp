
#include "Game.h"
#include "Player.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

	
Game::Game(){

	winner = -1;
	cLastX = 0;
	cLastY = 0;
};

void Game::start(){
	
	welcome();
    
	play();
	
	
};

// This will have more later
void Game::welcome(){
	
	cout << "Welcome to Battleship!\n";
	
	
};

void Game::play(){
	
	// Continues infinitely until either player wins.
	// each person takes a turn and then it checks to see if the opponent lost or not.
	while (true){
		
		turn();
		if (p2.checkIfLose()){
			winner = 1;
			break;
		}
		compTurn();
		if (p1.checkIfLose()){
			winner = 2;
			break;
		}
		
	}
	
	if (winner == 1){
		cout << "Congratulations! Player 1 won!\n";
		
	} else if (winner == 2){
		cout << "Congratulations! Player 2 won!\n";
	}else {
		// This is for making sure things aren't broken
		cout << "You finished but you broke it\n";
	}
	
	
};
	
// The computer's AI is here, which uses a hunt and track approach.
void Game::compTurn(){
	
	int x = cLastX, y = cLastY;
	
	if(!hunt){
		
		if ( x > 0 && p1.checkField(x-1,y))
			x--;
		else if ( x < 10 && p1.checkField(x+1, y))
			x++;
		else if (y > 0 && p1.checkField(x, y-1))
			y--;
		else if (y < 10 && p1.checkField(x, y+1))
			y++;
		else {
			hunt = true;
		}
		
	}
	
	// Searches the board randomly until it finds a ship
	if (hunt){
		
		// Used to make finding odd squares easier
		int odd[5] = {1, 3, 5, 7, 9};
		
		// User to make finding even squares easier
		int even[5] = {0, 2, 4, 6, 8};
		
		// continually gets a random number that is valid and is in an odd numbered square. 
		// the odd number square is for an efficient algorithm of only hitting the "black" tiles
		// on a checkerboard design.
		do{
			x = rand() % 9 + 0;
			if (x % 2 == 0)
				y = even[rand() % 4 + 0];
			else 
				y = odd[rand() % 4 + 0];
			
		}while (!p1.checkField(x,y));
		
	} 
	
	if (p1.attackShip(x,y)){
		hunt = false;
		cLastX = x;
		cLastY = y;
	}
	
};

// The first turn for the player.
void Game::turn()
{
	int x, y = -1;
	char answer;
	bool cont = true;
    
    p2.display();
    
	// Continually asks the user until they input correct input.
	do
	{
		// Makes sure the input is the proper form.
		try {
			cout << "Please enter Row number: ";
			cin >> x;
			cout << "please enter Column letter: ";
			cin >> answer;
		
			// Used to convert the user's char input to a number
			char abc[10]={'A', 'B', 'C', 'D', 'E','F','G','H', 'I', 'J'};
			
			// Gets the number from the letter if they gave proper input
			for (int i = 0; i < 10; i++){
				if (abc[i] == toupper(answer))
					y = i;
				
			}
		
			// throws exception if x is not in the range, or y never get set
			if (x > 10 || x < 1 || y == -1){
				throw;
				
			}

			// The user inputs x as 1-10 not 0-9 for indexes.
			cont = p2.checkField(x-1,y);
		
		} catch (int e){
			
			// Exception error message
			cout << "Error: Improper input!\nPlease enter proper input! Numbers for Rows (1-10) and Letters for columns (A-J)!\n";
			
		}
		
	} while (!p2.checkField(x, y));
	
	
};
