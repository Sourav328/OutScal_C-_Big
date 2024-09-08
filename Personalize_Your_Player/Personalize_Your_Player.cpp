#include <iostream>
using namespace std;

void Game_Story()
{
    cout << "     ||***************************************||\n";
    cout << "             The Rising of the Warrior      \n";
    cout << "     ||***************************************||\n";

    cout << "In the Kingdom of Aydho,\n    darkness has overtaken the land\n";
    cout << "A once vibrant land is now shrouded in shadows,\n    And the people live in fear.\n";
    cout << "|| _________________________________________________________ ||\n";
    cout << "But amidst the despair, a lone hero emerges.\n";
    cout << "    A mysterious warrior, unknown to the people of Aydho,\nArrives from a distant land.\n";
    cout << "    Clad in shining armor and wielding a sword of ancient power,\nThis hero stands as a beacon of hope in the face of darkness.\n";
    cout << "    With determination in his eyes.\n";

    cout << "|| ---------------------------------------------------------- ||\n";

    cout << "The hero sets out on a perilous journey to save the kingdom.\n";
    cout << "    He battles monstrous creatures,\nOvercomes treacherous obstacles, and uncovers the secrets of the darkness.\n";
    cout << "    The fate of the kingdom rests on his shoulders.\nWill he succeed in his quest, or will darkness consume Aydho forever?\n";
    cout << "    And so, the Kingdom of Aydho was reborn,\nIts beacon of hope forever etched in the annals of legend.\n";

    cout << "     ||***************************************||\n\n";
}

class Player
{
private:
    string Name;

public:
    int Health;
    int Attack_Power;
    int Stamina;

 
    Player(string N, int H, int AP, int S)
    {
        Name = N;
        Health = H;
        Attack_Power = AP;
        Stamina = S;

        cout << "A new hero has emerged! Meet " << Name << ".\n";
        cout << Name << " is ready to fight for the Kingdom of Aydho!\n\n";
       
    }

    void Display_Player_Stats()
    {
        cout << "Player Stats:\n";
        cout << "Name: " << Name << endl;
        cout << "Health: " << Health << endl;
        cout << "Attack Power: " << Attack_Power << endl;
        cout << "Stamina: " << Stamina << endl;
    }

};

int main()
{
    Game_Story();
    char User_Input;

    do
    {
        cout << "Press P to Play the Game" << endl;
        cin >> User_Input;

        if (User_Input == 'p' || User_Input == 'P')
        {
            string player_name;
            cout << "Enter the name of your hero: ";
            cin >> player_name;

            
            Player Warrior(player_name, 100, 40, 50);
            Warrior.Display_Player_Stats();
            break;
        }
        else
        {
            cout << "Invalid input. Please press P to Play." << endl;
        }
    } while (true);

    return 0;
}
