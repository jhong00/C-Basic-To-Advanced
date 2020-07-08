#include <iostream>

using namespace std;

int main() 
{
    try
    {
        int num1;
        cout << "Enter first number: " << endl;
        cin >> num1; 

        int num2;
        cout << "Enter second number: " << endl;
        cin >> num2;

        if (num2 == 0)
        {
            throw 0;
        }

        cout << num1/num2 << endl; // this line of code does not execute if it reaches the if statement (contains throw which directs to catch right away)
    }
    catch(int x)
    {
        cout << "You can't divide by " << x << endl;
    }
}