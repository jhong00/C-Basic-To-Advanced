#include <iostream>
#include "example19birthday.h"
#include "example19people.h"

using namespace std;

int main()
{
    Birthday obj1(3,12,2000); // Birthday object storing 3 as month, 12 as day, 2000 as year

    People obj2("Jason", obj1); // People object storing "Jason" string, and object holding 3 parameters (month, day, year)
    obj2.printInfo();  // prints info altogether, and we can access this by utilizing our obj2, holding "Jason" and obj1, if we look back at printInfo we need name and DOB and we have that! 



}