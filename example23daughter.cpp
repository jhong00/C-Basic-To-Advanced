#include <iostream>
#include "example23daughter.h"

using namespace std; 

Daughter::Daughter() 
{

}

void Daughter::doSomething()
{
    publicv = 10; // from mother.h 
    cout << "publicv value is " << publicv << endl;
    protectedv = 20; // we can access protected when inheriting 
    cout << "protectedv value is " << protectedv << endl;
    
    // privatev = 30; // cannot access because private variable 
    // cout << "privatev value is " << privatev << endl; 
}

