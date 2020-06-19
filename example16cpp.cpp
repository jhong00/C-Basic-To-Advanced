#include <iostream>
#include "example16.h"
 
using namespace std;

Sally::Sally()
{
    cout << "i am the constructor" << endl;
}

void Sally::printSomething() // remember we still need void, put before printSomething()
{
    cout << "I have printed something" << endl;
}

Sally::~Sally() // how to write the destructor
{
    cout << "i am the destructor" << endl;
}