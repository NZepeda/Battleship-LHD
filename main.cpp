/*
 * Authors:
 * Info: Text based Battleship game.
 * Date: 12/3/16
 */

#include "Game.h"
#include <ctype.h>

using namespace std;

int main(){
	bool cont = true;
	char input = 'n';
	do{
		Game game();
		game.start();
		
		while (cont){
			cout << "Would you like to play again? (y/n): ";
			try {
				cin >> input;
				input = tolower(input);
				
				if (input != 'y' && input != 'n'){
					cout << "Please enter the letter 'y' or the letter 'n'.\n";
				} else {
					cont = false;
				}
				
			} catch (int e){
				cout << "Error: Invalid input.\nPlease enter the letter 'y' or the letter 'n'.\n";
			}
		}
		
	} while(input != 'n');
	return 0;
}
