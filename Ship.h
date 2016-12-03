
#include <string>
#include <vector>

using namespace std;

#ifndef Ship_h
#define Ship_h


class Ship{
    
public:
    
    string name;
    
    // Public functions
    bool isDestroyed();
    bool check(int, int);
    
    // Constructor
    Ship(int, string);
    Ship();
    
    // Getters and Setters
    int getSize();
    
private:

    int size;
    vector<int> x;
    vector<int> y;
    
    void place();
    int findElementIndex(int);
    bool findElementInYVector(int, int);
    void removeShipCoordinateAtIndex(int);
    
    
};

#endif /* Ship_h */
