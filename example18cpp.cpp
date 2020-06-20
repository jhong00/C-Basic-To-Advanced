#include <iostream>
#include "example18.h"

using namespace std;

Jason::Jason(int a, int b)
: normalVar(a), constVar(b) // because we have a constant variable, we need to do member initializers to set int a = normalVar(a) and int b = constVar(b) 
{
}

void Jason::printSomething()
{
    cout << "regular variable is: " << normalVar << "constant variable is: " << constVar << endl; 
}


