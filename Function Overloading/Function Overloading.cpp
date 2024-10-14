#include <bits/stdc++.h>
using namespace std;

class Dragon
{
private:

    int health = 100;
    string name;

public:

    void AccessSuperPower(string player_name, int seconds)  //Fire Attack
    {
        if (IsAlive() == true)
        {
            name = player_name;
            cout << name << " activated fire super-power for " << seconds << " seconds!\n";
        }
    }

    void AccessSuperPower(string player_name, float pressure)  //Air Attack
    {
        name = player_name;
        cout << name << " activated air super-power at " << pressure << " bars!\n";
    }

    void AccessSuperPower(string player_name)  //Water Attack
    {
        name = player_name;
        cout << name << " activated water super-power!\n";
    }

protected:

    bool IsAlive()
    {
        if (health > 0)
            return true;

        return false;
    }
};

int main()
{
    Dragon Saphira;
    Saphira.AccessSuperPower("Sumiofy", 4);
    Saphira.AccessSuperPower("Hoxodor", 3.44f);
    Saphira.AccessSuperPower("Spinosaurus");
    return 0;
}
