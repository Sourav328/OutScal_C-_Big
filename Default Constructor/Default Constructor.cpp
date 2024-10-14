#include <iostream>

using namespace std;

class Player
{
private:
    int Health;
    int Score;
    string Name;
public:
    Player()
    {
        Health = 100;
        Score = 20;
        Name = "Sourav";
        cout << "Hi, I am a default constructor of Class Player, the player." << endl;
        cout << "Basically developers use me to initialize important variables / parameters of the player." << endl;
        cout << "In the constructor initialize a variable of" << "\n" << "1. Health =" << Health << "\n" << "2. Score = " << Score << "\n" << "3. Name = " << Name << endl;
        cout << "           " << endl;

    }
    int getHealth()
    {
        return Health;
    }
    int getScore()
    {
        return Score;
    }
    string getName()
    {
        return Name;
    }
};

int main()
{
    

    Player player;
    cout << "Player's Health: " << player.getHealth() << endl;
    cout << "Player's Score: " << player.getScore() << endl;
    cout << "Player's Name: " << player.getName() << endl;
}

