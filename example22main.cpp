#include <iostream>
#include "example22.h"
using namespace std;

// purpose: operator overloading 

int main()
{
    Sally obj2(20); // created sally object accepting a parameter 
    Sally obj3(30); // created sally object2 accepting a parametr
    Sally obj4; // created an empty sally object 


    obj4 = obj2 + obj3; // then, with this empty sally object, we overloaded it with obj3 as it was the first parameter... obj2 is not a parameter because we treated it like a normal Sally object accepting a parameter Sally(int)
    cout << obj2.num << endl;
}