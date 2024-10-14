#include <iostream>
#include <string>

using namespace std;

// Base class: Enemy
class Enemy {
protected:
    int health;
    int attack_Power;
    int attack_Range;
    int XP;
    int level;

public:
    // Constructor
    Enemy(int h, int ap, int ar, int xp, int lvl)
        : health(h), attack_Power(ap), attack_Range(ar), XP(xp), level(lvl) 
    {

    }

    // Getter and setter methods
    int get_Health() const 
    { return health; }

    void set_Health(int h) 
    { health = h; }

    int get_Attack_Power() const 
    { 
        return attack_Power; 
    }
    void set_Attack_Power(int ap)
    { 
        attack_Power = ap; 
    }

    int get_Attack_Range() const 
    { 
        return attack_Range; 
    }
    void set_Attack_Range(int ar) 
    { 
        attack_Range = ar; 
    }

    int get_XP() const
    { 
        return XP; 
    }
    void set_XP(int xp) 
    { 
        XP = xp; 
    }

    int get_Level() const 
    { 
        return level; 
    }
    void set_Level(int lvl) 
    { 
        level = lvl; 
    }

    virtual void display_Info()
    {

        
        cout << "Health:-"<< health << endl;
        cout << "Attack Power:-" << attack_Power << endl;
        cout << "Attack Range:-" << attack_Range << endl;
        cout << "XP:-" << XP << endl;
        cout << "Level:-" << level << endl;
    }
};

// Derived class: FlyingEnemy
class Flying_Enemy : public Enemy 
{
private:
    int flying_Radius;

public:
    // Constructor
    Flying_Enemy(int h, int ap, int ar, int xp, int lvl, int fr)
        : Enemy(h, ap, ar, xp, lvl), flying_Radius(fr) {}

    // Getter and setter for flyingRadius
    int get_Flying_Radius() const 
    { 
        return flying_Radius;
    }
    void set_Flying_Radius(int fr) 
    { 
        flying_Radius = fr; 
    }

    // Fly function with funny message
    void Fly() 
    {
        cout << "I'm flying high! Watch out below!" << endl;
    }

    void display_Info() override 
    {
        Enemy::display_Info();
        cout << "Flying Radius:- " << flying_Radius << endl;
    }
};

// Derived class: GroundEnemy
class Ground_Enemy : public Enemy 
{
private:
    int patrolling_Radius;

public:
    // Constructor
    Ground_Enemy(int h, int ap, int ar, int xp, int lvl, int pr)
        : Enemy(h, ap, ar, xp, lvl), patrolling_Radius(pr)
    {

    }

    // Getter and setter for patrollingRadius
    int get_Patrolling_Radius() const 
    { 
        return patrolling_Radius; 
    }
    void set_Patrolling_Radius(int pr) 
    { 
        patrolling_Radius = pr;
    }

    // Patrol function with sarcastic message
    void Patrol() 
    {
        cout << "Just patrolling my territory... nothing to see here!" << endl;
    }

    void display_Info() override 
    {
        Enemy::display_Info();
        cout << "Patrolling Radius:- " << patrolling_Radius << endl;
    }
};

// Example usage
int main() {
    Flying_Enemy flying_enemy(100, 15, 50, 200, 1, 30);
    Ground_Enemy ground_enemy(150, 20, 25, 250, 1, 10);

    cout << "Flying Enemy Info: " << endl;
    flying_enemy.display_Info();
    flying_enemy.Fly();

    cout << "\nGround Enemy Info: " << endl;
    ground_enemy.display_Info();
    ground_enemy.Patrol();

    return 0;
}
