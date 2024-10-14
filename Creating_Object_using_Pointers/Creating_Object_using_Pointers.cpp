#include<iostream>
using namespace std;
class Player 
{
private:
    int Player_Health;
public:
    int get_Health() 
    {
        return Player_Health;
    }

    void set_Health(int Health) 
    {
        Player_Health = Health;
    }
};
int main()
{
    Player* Player_Point = new Player();
    Player_Point->set_Health(100);
    cout << "Player Health: " << Player_Point -> get_Health() << endl;
    delete Player_Point;
    return 0;
}

