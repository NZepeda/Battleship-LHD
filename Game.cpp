
#include "Game.h"
#include "Player.h"
#include <iostream>

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

bool Game::turn() //player1 turn
{
	int answer1;
	char answer2;
	do
	{
		p1.turn()
		{
			cout << "Please enter Row number: ";
			cin >> answer1;
			cout << "please enter Column letter: ";
			cin >> answer2;
		}

	} while (!p1.checkField(answer1, answer2));
		return;
};
