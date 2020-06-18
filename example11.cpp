#include <iostream>

using namespace std;

int main()
{
    int fish = 5; 
    cout << &fish << endl; // get memory address of fish

    int *fishes; // assigning pointer to fishes
    fishes = &fish; // assigning memory address to fishes
    cout << fishes << endl; // print fishes, which provides the memory address of fish
}