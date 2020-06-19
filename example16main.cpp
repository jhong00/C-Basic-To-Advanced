#include <iostream>
#include "example16.h"

using namespace std;

// purpose: demonstrating usage of destructors... c++ automatically destroys objects after being called so destructor is called automatically when constructor is called 

int main()
{
    Sally sallyobj;

    sallyobj.printSomething();
}