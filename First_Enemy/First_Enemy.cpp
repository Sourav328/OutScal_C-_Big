#include<ctime>
#include <iostream>
using namespace std;


class Player
{

private:

    int Health = 100;

    int Max_Damage = 30;
    int Min_Damage = 20;

    int Max_Healing = 15;
    int Min_Healing = 8;


public:
    Player()
    {

        cout << "\nHi my name is Sourav! We need to save Kingdom" << endl;
        cout << "Here are some stats that might be useful for you going ahead" << endl;

        cout << "\nSourav Health: " << Health;
        cout << "\n__________________________________\n";
        cout << "Sourav Attack Range is between " << Min_Damage << "-" << Max_Damage << ".";
        cout << "\n__________________________________\n";
        cout << "Sourav Healing Range is between " << Min_Healing << "-" << Max_Healing << "." << endl;

    }



    int Get_Health()
    {
        return Health;
    }

    void Take_Damage(int Damage)
    {

        cout << "Ohh No , a critical hit to player" << endl;
        cout << "Enemy is dealing damage of " << Damage << " to the Sourav!" << endl;
        Health = Health - Damage;

        if (Health < 0)
        {
            cout << "Player Died!!!, You Lost" << endl;
        }
        else
        {
            cout << "Sourav Current Health after reciving damage is : " << Health << endl;
        }

    }

    int Give_Damage()
    {

        srand(time(0));
        int Random_Damage = (rand() % (Max_Damage - Min_Damage + 1) + Min_Damage);



        return Random_Damage;
    }

    void Heal()
    {
        srand(time(0));
        int randomHeal = (rand() % (Max_Healing - Min_Healing + 1) + Min_Healing);

        Health = Health + randomHeal;

        cout << "Sourav Healed with HP of " << randomHeal << endl;

        cout << "Sourav Health after healing " << Health << endl;
    }

};

class Enemy
{
private:

    int Health = 100;

    int Max_Damage = 20;
    int Min_Damage = 10;


public:

    Enemy()
    {
        cout << "Ha ha ha , I am the Lord of Darness!!" << endl;
    }


    int Get_Health()
    {
        return Health;
    }

    void Take_Damage(int Damage)
    {

        cout << "Ohh No , a critical hit to Enemy" << endl;
        cout << "Player is dealing damage of " << Damage << " to the Enemy!" << endl;
        Health = Health - Damage;

        if (Health < 0)
        {
            cout << "Enemy Died!!!, You Won" << endl;
        }
        else
        {
            cout << "Enemy's Current Health after reciving damage is : " << Health << endl;
        }


    }

    int Give_Damage()
    {

        srand(time(0));
        int Random_Damage = (rand() % (Max_Damage - Min_Damage + 1) + Min_Damage);



        return Random_Damage;
    }


};

void Game_Loop(Player Player, Enemy Enemy) 
{
    char Player_Choice;


    do
    {

        cout << "Press A to attack or H to heal" << endl;
        cin >> Player_Choice;

        if (Player_Choice == 'a' || Player_Choice == 'A')
        {
            system("clear");
            
            Enemy.Take_Damage(Player.Give_Damage());


            if (Enemy.Get_Health() > 0)
            {
                cout << "Ha ha ha , Its my turn now!" << endl;
                Player.Take_Damage(Enemy.Give_Damage());
            }

        }
        else if (Player_Choice == 'h' || Player_Choice == 'H')
        {
            system("clear");
         
            Player.Heal();

            if (Enemy.Get_Health() > 0)
            {
                cout << "Ha ha ha , Its my turn now!" << endl;
                Player.Take_Damage(Enemy.Give_Damage());
            }

        }
        else
        {
            system("clear");
            cout << "Invalid Input" << endl;
        }

    } while (Player.Get_Health() > 0 && Enemy.Get_Health() > 0);
}

void gameStory()
{
    system("clear");
    cout << "\n__________________________________\n";
    cout << " Sourav : A true Warrior ";
    cout << "\n__________________________________\n";
    cout << "\nOnce upon a time, there was a kingdom full of happiness." << endl;
    cout << "\n__________________________________\n";
    cout << "\nUnfortunately, on one evil day, \n Drkness has overtaken the land \nNow the entire kingdom is at stake. the people live in fear.\n";
    cout << "\n__________________________________\n";
}


int main()
{
    gameStory();
    char userInput;
    do
    {
        cout << "Press S to start the game or any other key to exit!" << endl;
        cin >> userInput;

        if (userInput == 'S' || userInput == 's')
        {
            Player  playerObj;
            Enemy enemyObj;

            Game_Loop(playerObj, enemyObj);

        }
        else
        {
            cout << "Thanks for playing Sourav!" << endl;
        }


    } while (userInput == 'S' || userInput == 's');

}