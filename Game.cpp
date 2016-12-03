
#include "Game.h"
#include "Player.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

	
Game::Game(){
	Player p1();
	Player p2();
	winner = -1;
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
		
		p1.turn();
		if (p2.checkIfLose()){
			winner = 1;
			break;
		}
		p2.turn();
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
	
	int x = rand() % 9 + 0;
	int y = rand() % 9 + 0;
	
	// Searches the board randomly until it finds a ship
	if (hunt){
		
		// continually gets a random number that is valid and is in an odd numbered square. 
		// the odd number square is for an efficient algorithm of only hitting the "black" tiles
		// on a checkerboard design.
		while (!check(x,y) && (x % 2) == 1 && (y % 2) == 1){
			
			x = rand() % 9 + 0;
			y = rand() % 9 + 0;
		}
		
	} else {
		// Smart stuff goes here
	}
	
	
};

// The first turn for the player.
void Game::turn()
{
	int x, y = -1;
	char answer;
	bool cont = true;
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
				if (abc[i] == toUpper(answer)
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
			cout << "Error: Improper input!\nPlease enter proper input! Numbers for Rows (1-10) and Letters for columns (A-J)!\n"
			
		}
		
	} while (!p2.checkField(x, y));
	
	
};
