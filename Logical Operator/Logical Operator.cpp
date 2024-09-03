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


    if (Is_Player_In_Range == true) 
    {

        if (Is_Player_Attacking != true)

        {

            cout << "The Enemy Should Attack" << endl;

        }
        else
        {

            cout << "Player Is not in Rang" << endl;

        }
        if (Is_Player_Defending == true)

        {

            cout << "Enemy Should Hold" << endl;

        }
        else
        {

            cout << "Enemy is not there" << endl;

        }
        if (Player_Health <= 20 && Is_Player_Attacking == true)
        {

            cout << "Player Should Deliver A Range Attack " << endl;

        }
        else 
        {

            cout << "Player Attacking Is Out of Range " << endl;

        }
        if (Is_Player_Defending == false && Player_Health == 100 || Player_Health <= 10)
        {

            cout << "Enemy Should Do A Special Ability Attack" << endl;

        }
        else
        {
            cout << "Game Over" << endl;
        }


    }
    else 
    {

        cout<<"Player Is Out Of Range" << endl;

    }

    


    return 0;
}