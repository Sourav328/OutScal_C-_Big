
#include <iostream>
using namespace std;

int Health = 100;
int attack = 20;
int defense = 50;
int HealingPower = 60;

void TakeDamage(int DamageToInflict) 
{
    cout << " Player Health = " << Health << endl;

    Health = Health - DamageToInflict;
    
    cout << " Player Got Damage" << endl;
    cout << " Player Health = " << Health << endl;
}

void Heal(int healthToRecover)
{
    Health = Health + healthToRecover;
    cout << "Player Is Recoverin = " << Health << endl;
}

void DamageMultiplier(double Multiplier)
{
    attack = attack * Multiplier;
    cout << "New attack value = " << attack << endl;
}


int main()
{  
    TakeDamage(60);
    Heal(10);
    DamageMultiplier(0.5);
    
}

