#include <iostream>
#include <cstdlib> // c standard library (rand)
#include <ctime> // access clock and time

// building a random number generator

using namespace std;

int main()
{
    int i;

    srand(time(0)); // seedrand, changing algorithm of rand, time(0) changes every second which changes algorithm

    for (i = 0; i < 25; i++)
    {
        cout << 1 + (rand()%6) << endl; // remainder can only be 1-5

    }
}