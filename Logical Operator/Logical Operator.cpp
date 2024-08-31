#include <iostream>
using namespace std;


int main() 
{

    bool Is_Player_In_Range;
    bool Is_Player_Attacking;
    bool Is_Player_Defending;
    int Player_Health;

    cout << "Is player in range? (1 for Yes, 0 for No): ";
    cin >> Is_Player_In_Range;

    cout << "Is player attacking? (1 for Yes, 0 for No): ";
    cin >> Is_Player_Attacking;

    cout << "Is player defending? (1 for Yes, 0 for No): ";
    cin >> Is_Player_Defending;

    cout << "Enter player health (0-100): ";
    cin >> Player_Health;

    if (Is_Player_In_Range)
    {
        if (Is_Player_Attacking)
        {
            cout << "The enemy should attack." << endl;
        }

        if (Is_Player_Attacking) {
            cout << "Enemy should hold." << endl;
        }

        if (Is_Player_Attacking && Player_Health < 20) {
            cout << "Player should deliver a rage attack." << endl;
        }

        if (Is_Player_Defending && (Player_Health == 100 || Player_Health < 10)) {
            cout << "Enemy should do a special ability attack." << endl;
        }
    }
    else 
    {
        cout << "Player is out of range, no action required." << endl;
    }

    return 0;
}