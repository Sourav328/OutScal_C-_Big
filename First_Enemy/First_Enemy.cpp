#include<ctime>
#include <iostream>
using namespace std;


class Player
{

private:

    int health = 100;

    int maxDamage = 30;
    int minDamage = 20;

    int maxHealing = 15;
    int minHealing = 8;


public:
    Player()
    {

        cout << "\nHi my name is Sourav! We need to save Kingdom" << endl;
        cout << "Here are some stats that might be useful for you going ahead" << endl;

        cout << "\nSourav Health: " << health;
        cout << "\n__________________________________\n";
        cout << "Sourav Attack Range is between " << minDamage << "-" << maxDamage << ".";
        cout << "\n__________________________________\n";
        cout << "Sourav Healing Range is between " << minHealing << "-" << maxHealing << "." << endl;

    }



    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {

        cout << "Ohh No , a critical hit to player" << endl;
        cout << "Enemy is dealing damage of " << damage << " to the Sourav!" << endl;
        health = health - damage;

        if (health < 0)
        {
            cout << "Player Died!!!, You Lost" << endl;
        }
        else
        {
            cout << "Sourav Current Health after reciving damage is : " << health << endl;
        }

    }

    int GiveDamage()
    {

        srand(time(0));
        int randomDamage = (rand() % (maxDamage - minDamage + 1) + minDamage);



        return randomDamage;
    }

    void Heal()
    {
        srand(time(0));
        int randomHeal = (rand() % (maxHealing - minHealing + 1) + minHealing);

        health = health + randomHeal;

        cout << "Sourav Healed with HP of " << randomHeal << endl;

        cout << "Sourav Health after healing " << health << endl;
    }

};

class Enemy
{
private:

    int health = 100;

    int maxDamage = 20;
    int minDamage = 10;


public:

    Enemy()
    {
        cout << "Ha ha ha , I am the Lord of Darness!!" << endl;
    }


    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {

        cout << "Ohh No , a critical hit to Enemy" << endl;
        cout << "Player is dealing damage of " << damage << " to the Enemy!" << endl;
        health = health - damage;

        if (health < 0)
        {
            cout << "Enemy Died!!!, You Won" << endl;
        }
        else
        {
            cout << "Enemy's Current Health after reciving damage is : " << health << endl;
        }


    }

    int GiveDamage()
    {

        srand(time(0));
        int randomDamage = (rand() % (maxDamage - minDamage + 1) + minDamage);



        return randomDamage;
    }


};

void gameLoop(Player player, Enemy enemy)
{
    char playerChoice;


    do
    {

        cout << "Press A to attack or H to heal" << endl;
        cin >> playerChoice;

        if (playerChoice == 'a' || playerChoice == 'A')
        {
            system("clear");
            // Perform Attack
            enemy.TakeDamage(player.GiveDamage());


            if (enemy.GetHealth() > 0)
            {
                cout << "Ha ha ha , Its my turn now!" << endl;
                player.TakeDamage(enemy.GiveDamage());
            }

        }
        else if (playerChoice == 'h' || playerChoice == 'H')
        {
            system("clear");
            // Perform Heal
            player.Heal();

            if (enemy.GetHealth() > 0)
            {
                cout << "Ha ha ha , Its my turn now!" << endl;
                player.TakeDamage(enemy.GiveDamage());
            }

        }
        else
        {
            system("clear");
            cout << "Invalid Input" << endl;
        }

    } while (player.GetHealth() > 0 && enemy.GetHealth() > 0);
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

            gameLoop(playerObj, enemyObj);

        }
        else
        {
            cout << "Thanks for playing Sourav!" << endl;
        }


    } while (userInput == 'S' || userInput == 's');

}