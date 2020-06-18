#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << sizeof(c) << endl; // size of character = 1

    int x;
    cout << sizeof(x) << endl; // size of integer = 4

    double y;
    cout << sizeof(y) << endl; // size of double = 8

    double array[10];
    cout << sizeof(array) / sizeof(array[0]) << endl; // 80 / 8 = 10 (size of the array)
}