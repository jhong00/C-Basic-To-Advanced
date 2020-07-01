#include <iostream>

using namespace std;

// pure virtual functions are simply functions with abstract classes
// before, we had virtual void attack() = {} but now we have an abstract class within a virtual function 

class Enemy
{
    public:
        virtual void attack() = 0; // abstract class... if it is an abstract class, we need to initialize attack functions within each class otherwise we'll get an error
};

class Ninja : public Enemy {
    public:
        void attack()
        {
            cout << "ninja attack" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack()
        {
            cout << "monster attack" << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n; // when we create an enemy1 object which is a pointer, we can assign the memory address of n to it and since Enemy has an abstract class, it will check if the ninja object, n, has the attack function as well 
    Enemy *enemy2 = &m; // when we create an enemy2 object which is a pointer, we can assign the memory address of m to it and since the enemy class has a virtual function w/ an abstract class attack(), it will direct to the monster class to check if it has an attack() function, and since it is an abstract class we require Monster to have an attack() function, this will cause overwriting to happen 
    enemy1->attack(); // remember -> for pointers, same as . to access functions 
    enemy2->attack(); // remember -> used for pointers, same as . to access functions
}