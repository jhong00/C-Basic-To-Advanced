#include "example17.h"
#include <iostream>

using namespace std;

Sally::Sally()
{
    cout << "I have called the constructor" << endl;
}

void Sally::printSomething()
{
    cout << "I have printed a normal object" << endl;
}

void Sally::printSomething2() const // remember const is after () 
{
    cout << "I have printed a constant object" << endl;
}