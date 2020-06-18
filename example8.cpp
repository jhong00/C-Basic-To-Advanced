#include <iostream>

using namespace std;

void printNumber(int x)
{
    cout << "i am printing an integer" << x << endl;
}

void printNumber(float x)
{
    cout << "i am printing a float" << x << endl;
}

int main()
{
    int a = 50;
    float b = 50.5;

    printNumber(a); // because integer, can only access printNumber with integer x
    printNumber(b); // because float, can only access printNumber with float x
}
