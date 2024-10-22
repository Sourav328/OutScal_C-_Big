#include <iostream>
using namespace std;


void castSpell(int magicLevel) 
{
    cout << "Casting spell with magic level: " << magicLevel << endl;
}

void brewElixir(int& magicLevel) 
{
    magicLevel + 10;  
}

void brewPotion(int UpdatemagicLevel) 
{
    UpdatemagicLevel += 50;  
    castSpell(UpdatemagicLevel);  
}

int main() 
{
    
    int magicLevel = 30;
    
    cout << "Initial magic level: " << magicLevel << endl;
    cout << "After drinking the Elixir of Wisdom(Call by Reference)" << endl;
    brewElixir(magicLevel);  
    castSpell(magicLevel);   
    brewPotion(magicLevel); 
    cout << "After drinking the Potion of Swiftness (Call by Value)" << endl;
    cout << "Final magic level: " << magicLevel << endl;

    return 0;
}
