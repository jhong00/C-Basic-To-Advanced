#include <iostream>

using namespace std;

// purpose: polymorphism: using same function within different objects to perform different actions 

class Enemy {
    protected:
        int attackPower;
    public:
        void setAttackPower(int a) {
            attackPower = a;
        }

};

class Ninja : public Enemy {
    public:
        void attack() {
            cout << "I am a ninja, ninja chop! -" << attackPower << endl;
        }
};

class Monster : public Enemy {
    public:
        void attack() {
            cout << "Monster must eat you -" << attackPower << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n; // basically setting the memory address of Ninja object, n, to enemy1, so n would have the attributes of enemy
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(20); // enemy1 is a pointer, so we use -> for pointers and we can use setAttackPower because it is of the enemy class
    enemy2->setAttackPower(40);
    n.attack(); 
    m.attack();
}