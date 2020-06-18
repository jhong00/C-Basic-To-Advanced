#include <iostream>

using namespace std;

// iterating through a simple array with the stored size of the array

void printArray(int theArray[], int sizeOfTheArray);

int main()
{
    int jason[5] = {5, 10 ,15, 20, 25};
    int adrienne[5] = {4, 8, 12, 16, 20};

    printArray(jason, 3); // when we're calling jason[3] we only have to call jason because it already knows it is an array
}

void printArray(int theArray[], int sizeOfTheArray)
{
    for (int x = 0; x < sizeOfTheArray; x++)
    {
        cout << theArray[x] << endl;
    }
}