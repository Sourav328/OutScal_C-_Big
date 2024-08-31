#include <iostream>
using namespace std;

int main()
{
    int Player_Health, Enemy_Health;

    
    cout << "Enter Player Health: ";
    cin >> Player_Health;

    cout << "Enter Enemy Health: ";
    cin >> Enemy_Health;

    
    if (Player_Health == 100)
    {
        cout << "Player's health is full." << endl;
    }
    else if (Player_Health == 50)
    {
        cout << "Player's health is half." << endl;
    }
    else if (Player_Health == 0)
    {
        cout << "Player's health is zero. Game over!" << endl;

        
        if (Enemy_Health == 0)
        {
            cout << "Game over! It's a draw." << endl;
        }
        else
        {
            cout << "Player lost." << endl;
        }
    }
    else if (Player_Health > 0 && Player_Health < 100)
    {
        cout << "Player's health is " << Player_Health << ". Player took damage." << endl;

        
        if (Enemy_Health == 100)
        {
            cout << "Enemy's health is full." << endl;
        }
        else if (Enemy_Health == 50)
        {
            cout << "Enemy's health is half." << endl;
        }
        else if (Enemy_Health == 0)
        {
            cout << "Enemy's health is zero. Game over!" << endl;
            cout << "Player won." << endl;
        }
        else
        {
            cout << "Enemy's health is " << Enemy_Health << "." << endl;
        }
    }
    else
    {
        cout << "Invalid player health value." << endl;
    }

    return 0;
}