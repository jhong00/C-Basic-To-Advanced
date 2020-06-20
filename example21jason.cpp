#include <iostream>
#include "example21jason.h"

using namespace std; 

Jason::Jason(int h)
{
    age = h;
}

void Jason::printAge()
{
    cout << "Jason is " << age << " years old" << endl;
    cout << "Using this->age Jason is " << this->age << " years old" << endl; // stores the address of the current object, obj(23), to (this), which is basically age
    cout << "Using (*this).h Jason is  " << (*this).age<< " years old" << endl; // DEFERENCING A POINTER, taking memory location of object, obj(23), and obj.age = 23
}
