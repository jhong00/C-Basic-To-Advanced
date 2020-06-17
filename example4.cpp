#include <iostream>
using namespace std;

// switch, case, and break

int main()
{
    int age;
    cin >> age;

    switch (age)
    {
        case 16:
            cout << "hey you can drive now" << endl;
            break; // ends the switch

        case 18: 
            cout << "hey you can buy lotto tickets" << endl; 
            break;
        
        case 21:
            cout << "hey you can buy some beer" << endl;
            break;

        default:
            cout << "sorry you get nothing" << endl;
    }
}