#include <iostream>

using namespace std;

int main()
{
    int bucky[5];
    int *jason = &bucky[0];
    int *adrienne = &bucky[1];
    int *selena = &bucky[2];

    cout << "Memory address of Jason is: (should be 0) " << jason << endl;
    cout << "Memory address of adrienne is: (should be 4) " << adrienne << endl;
    cout << "Memory address of selena is: (should be 8) " << selena << endl; 

}