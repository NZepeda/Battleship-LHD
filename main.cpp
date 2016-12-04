/*
 * Authors:
 * Info: Text based Battleship game.
 * Date: 12/3/16
 */

#include "Game.h"
#include <ctype.h>
#include <fstream>

string getFileContents (ifstream&);

using namespace std;

int main(){
	bool cont = true;
	char input = 'n';
	
	do{
		Game game;
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

void printBanner(){
    
    ifstream Reader ("banner.txt");             //Open file
    
    string Art = getFileContents (Reader);       //Get file
    
    cout << Art << std::endl;               //Print it to the screen
    
    Reader.close ();                           //Close file
}

string getFileContents (ifstream& File)
{
    std::string Lines = "";        //All lines
    
    if (File)                      //Check if everything is good
    {
        while (File.good ())
        {
            std::string TempLine;                  //Temp line
            std::getline (File , TempLine);        //Get temp line
            TempLine += "\n";                      //Add newline character
            
            Lines += TempLine;                     //Add newline
        }
        return Lines;
    }
    else                           //Return error
    {
        return "ERROR File does not exist.";
    }
}
