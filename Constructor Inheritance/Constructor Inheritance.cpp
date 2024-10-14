#include <iostream>
using namespace std;


class Player 
{
public:
    
    Player() 
    {
        cout << "Creating an object of class Player." << endl;
    }

    ~Player() {
        cout << "Deleting object of class Player." << endl;
    }
};


class StrongPlayer : public Player 
{
public:
    
    StrongPlayer() 
    {
        cout << "Creating an object of class StrongPlayer." << endl;
    }

    ~StrongPlayer() 
    {
        cout << "Deleting object of class StrongPlayer." << endl;
    }
};

int main() 
{
   
    StrongPlayer strongPlayer1;
}
