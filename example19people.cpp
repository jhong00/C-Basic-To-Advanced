#include "example19birthday.h"
#include "example19people.h"
#include <iostream>

using namespace std; 

People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo) 
// name = x 
// dateOfBirth = bo 
{
    
}

void People::printInfo()
{
    cout << name << " was born on ";
    dateOfBirth.printDate();
}


