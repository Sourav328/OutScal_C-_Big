#include <iostream>
using namespace std;


// FOR LOOP
void Shooting()
{        }
// WHILE LOPP

void Healing()
{        }

// DO WHILE
void Attacking()
{        }

int main() 

{
    // FOR LOOP
    
    for (int i = 0; i < 10; ++i)
    {

        Shooting();
        cout << "Player Is Shooting " <<i<< endl;

    }

    cout << " " << endl;

    // WHILE LOPP
    int h = 0;

    while (h < 5)
    {

        ++h;
        Healing();
        cout << "Player Is Healing " <<h<< endl;
        
    }

    cout << " " << endl;

    // DO WHILE
    int hit = 0;
    do
    {
        ++hit;
        Attacking();
        cout << "Player Is Attacking " << hit << endl;
    } 
    
    while (hit < 7);

    

    return 0;
}