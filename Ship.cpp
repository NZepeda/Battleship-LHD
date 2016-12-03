
#include "Ship.h"
#include <algorithm>

using namespace std;

// Constructor
Ship::Ship(int s, string n){
    name = n;
    size = s;
}


// Getter for the size
int Ship::getSize(){
    return size;
    
}

// Check to see if a ship has been hit
bool Ship::check(int xCoor, int yCoor){
    
    bool hit = false;
    
    // Check if the xCoor passed is in the x vector
    if(find(x.begin(), x.end(), xCoor) != x.end()) {
        
        // xCoordinate was found, check same index for y vector
        int indexOfElement = findElementIndex(xCoor);
        
        // 
        if(findElementInYVector(yCoor, indexOfElement)){
            hit = true;
            removeShipCoordinateAtIndex(indexOfElement);
        }
    }
    
    return hit;
}

// Checks to see if the x coordinate exits in our vector
int Ship::findElementIndex(int xCoor){
    
    int indexOfElement = find(x.begin(), x.end(), xCoor) - x.begin();
    
    return indexOfElement;
}


// Accepts the index of the array and checks the y vector at that index
// and compares it to the yCoordinate the user passed in, if they are the same
// then the user has gotten a hit on the ship!
bool Ship::findElementInYVector(int yCoor, int index){
    
    bool found = false;
    
    if(y[index] == yCoor){
        found = true;
    }
    
    return found;
}

bool Ship::isDestroyed(){
    
    if(x.empty() && y.empty()){
        return true;
    }
    
    return false;
}

void Ship::removeShipCoordinateAtIndex(int index){
    
    x.erase(x.begin()+index);
    y.erase(y.begin()+index);
    
}













