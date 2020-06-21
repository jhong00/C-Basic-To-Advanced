#include <iostream>
#include "example23daughter.h"
#include "example23mother.h"
using namespace std; 

int main()
{
    Mother baseClass;
    baseClass.sayName();

    Daughter derivedClass;
    derivedClass.sayName();

    Daughter protectedClass;
    protectedClass.doSomething();
    
}