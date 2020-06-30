#include <iostream>
#include "example24daughter.h"
#include "example24mother.h"

using namespace std;

Daughter::Daughter()
{
    cout << "I am the daughter constructor" << endl;
}

Daughter::~Daughter()
{
    cout << "I am the daughter deconstructor" << endl;
}