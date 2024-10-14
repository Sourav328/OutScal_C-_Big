#include <iostream>
using namespace std;

class Player 
{
private:
    string name;

public:
    
    Player() 
    {
        name = "Sourav";
        cout << "I am a player (" << name << "). I just got spawned in the game world because my developer created the player's object. \n";
        cout << "Agggh! Boring life begins: fight, die, respawn." "\n" "Huh, I swear if I ever escape this game, I’m gonna find that developer!\n";
    }

    // Destructor
    ~Player() 
    {
        cout << "See?? that C++ destroyed my object(figure out how) and now I died." "\n" "That * ***language you know 😡" << endl;
    }
};

int main() {
    
    Player player;

    
    return 0;
}
