#include <iostream>
#include "example19birthday.h"

using namespace std; 

Birthday::Birthday(int m, int d, int y)
{
    month = m; // reinitialize to obtain month value
    date = d;
    year = y; 
}

void Birthday::printDate()
{
    cout << month << "/" << date << "/" << year << endl;
}