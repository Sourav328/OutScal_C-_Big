#include <iostream>
using namespace std;

void Game_Story()
{
    cout << "   ***************************************\n";
    cout << "         The Rising of the Warrior      \n";
    cout << "   ***************************************\n";
    cout << "       In the Kingdom of Aydho,\n    darkness has overtaken the land\n";
    cout << "A once vibrant land is now shrouded in shadows,\n       And the people live in fear.\n";
    cout << "But amidst the despair, a lone hero emerges.\n";
    cout << "A mysterious warrior, unknown to the people of Aydho,\n       Arrives from a distant land.\n";
    cout << "Clad in shining armor and wielding a sword of ancient power,\nThis hero stands as a beacon of hope in the face of darkness.\n";
    cout << "       With determination in his eyes,\nThe hero sets out on a perilous journey to save the kingdom.\n";
    cout << "       He battles monstrous creatures,\nOvercomes treacherous obstacles, and uncovers the secrets of the darkness\n";
    cout << "       The fate of the kingdom rests on his shoulders.\nWill he succeed in his quest, or will darkness consume Aydho forever?\n";
    cout << "       And so, the Kingdom of Aydho was reborn,\nIts beacon of hope forever etched in the annals of legend.\n";
    cout << "   ***************************************\n\n";
}
class Player 
{

public :
    int Health;
    int Attack_Power;
    Player(int H, int AP) 
    {
    
        Health = H;
        Attack_Power = AP;
    
    }
    void Display_Player_Stats() 
    {
    
        cout << "Player Stats:\n";
        cout << "Health: " << Health << endl;
        cout << "Attack Power: " << Attack_Power << endl;

    }

};

int main()
{
    Game_Story();
    Player Warrior(100, 40);
    Warrior.Display_Player_Stats();

    return 0;

}
