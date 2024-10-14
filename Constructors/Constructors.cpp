#include <iostream>
using namespace std;

class Player 
{
private:
    int health;  
    int lives;  

public:
    Player(int h, int l) : health(h), lives(l) 
    {
        cout << "I am a player, I just got spawned! Health: " << health << ", Lives: " << lives << endl;
    }

     ~Player() 
    {
        cout << "I am a player and I died. Health: " << health << endl;
    }
};


void localObjects() 
{
    Player* localPlayer = new Player(60, 2);  
    delete localPlayer; 
}


class FastPlayer : public Player 
{
private:
    int speed;

public:  
    FastPlayer(int h, int l, int s) : Player(h, l), speed(s) 
    {
        cout << "I am a fast player with speed: " << speed << endl;
    }
  
    ~FastPlayer() 
    {
        cout << "FastPlayer object destroyed." << endl;
    }
};

int main() 
{
    
    Player* player1 = new Player(100, 5);  
    Player* player2 = new Player(90, 4);   
    Player* player3 = new Player(80, 3);   

    
    delete player1;
    delete player2;
    delete player3;

    
    localObjects();

    
    FastPlayer fastPlayer(50, 2, 15); 
}