
#include "Game.h"
#include "Player.h"
#include <iostream>

class Game {
	
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
			if (p2.checkiflose()){
				winner = 1;
				break;
			}
			p2.turn();
			if (p1.checkiflose()){
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
	
}
