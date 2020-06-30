#include <iostream>
#include "example24mother.h"
#include "example24daughter.h"

using namespace std;

Mother::Mother()
{
    cout << "I am the mother constructor!" << endl;
}

Mother::~Mother()
{
    cout << "I am the mother deconstructor!" << endl;
}

