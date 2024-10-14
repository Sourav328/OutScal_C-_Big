

#include <iostream>
using namespace std;
class Player
{
private:
    int Health;
    
public:
    Player(int H) :Health(H)
    {
        
        cout << "Hi, I am a custom constructor of Class Player, some call me parameterized constructor as well." << endl;
        cout << "Basically, developers use me to set the specific values to the variables." << endl;
    }
    int get_Health()
    {
        return Health;
    }
    void PlayerInfo()
    {
        cout << "Player Health:- " << Health << endl;
        
    }
    
};
int main()
{
    int Health;
   
    cout << "Enter Player Health:- ";
    cin >> Health;
    Player player1(Health);
    
    player1.PlayerInfo();

}

