#include "example17.h"
#include <iostream>

using namespace std;

int main()
{
    Sally obj1;
    obj1.printSomething();
    
    const Sally obj2; // constant object (cannot change)
    obj2.printSomething2();
}