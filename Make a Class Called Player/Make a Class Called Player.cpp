#include <iostream>
using namespace std;

class Player
{
private:
    int health;  
    int bullets; 

public:
    //initialize health and bullets
    Player(int get_Health, int get_Bullets)
        : health(get_Health), bullets(get_Bullets)
    {
    }

    // Function to shoot
    void Shoot()
    {
        if (bullets > 0)
        {
            bullets--;
            cout << "Bullets remaining: " << bullets << endl; // Added bullets count
        }
        else
        {
            cout << "Out of bullets." << endl;
        }
    }

    // Function to take damage
    int Take_Damage(int damage)
    {
        health -= damage;
        if (health < 0)
        {
            health = 0; // Prevent health from going below 0
        }
        cout << "Current health: " << health << endl;
        return health; 
    }

    // Function to revive health
    void Revive_Health(int value)
    {
        health += value;
        cout << "Health revived! Current health: " << health << endl;
    }
};

int main()
{
    Player player(100, 20); 
    player.Shoot();         
    player.Take_Damage(50); 
    player.Revive_Health(5);  

    return 0;
}
