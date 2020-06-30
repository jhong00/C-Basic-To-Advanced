#include <iostream>

using namespace std;

// example26.cpp is an extended of example25.cpp 

class Enemy
{
    public:
        virtual void attack() // how to use polymorphism
        {

        }
};

class Ninja: public Enemy 
{
    public: 
        void attack()
        {
            cout << "Ninja attack!" << endl;
        }

};

class Monster: public Enemy
{
    public:
        void attack()
        {
            cout << "Monster attack!" << endl;
        }

};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n; // memory address of n assigned to enemy1, which allows us to know which attack function we are using when we call enemy1->attack();
    Enemy *enemy2 = &m; // memory address of m assigned to enemy2, which allows us to know which attack function we are using when we call enemy2->attack();
    enemy1->attack(); // this symbol -> is basically the same as . but -> is used when involving pointers
    enemy2->attack();

}