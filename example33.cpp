#include <iostream>

using namespace std;

// purpose: understanding try and catch blocks
// if we're dealing with an error in our try block it will throw an error
// when an error is thrown, it will direct to the catch block
// catch block in our case will print out the error number 
// if momsAge is indeed older than the sonsAge, there will be no error, therefore the if statement will not execute, resulting in the catch statement not executing as well

int main()
{

    try
    {
        int momsAge = 30;
        int sonsAge = 34;

        if (sonsAge > momsAge)
        {
            throw -1; 
        }
    }
    catch(int x)
    {
        cout << "son cannot be older than mother, ERROR NUMBER: " << x << endl;
    }
}