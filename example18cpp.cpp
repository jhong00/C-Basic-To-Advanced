#include <iostream>
#include "example18.h"

using namespace std;

Jason::Jason(int a, int b)
: normalVar(a), constVar(b) // syntax for list for setting int a = normalVar(a) and int b = constVar(b) 
{
}

void Jason::printSomething()
{
    cout << "regular variable is: " << normalVar << "constant variable is: " << constVar << endl; 
}


