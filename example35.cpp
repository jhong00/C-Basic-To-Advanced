#include <iostream>
#include <fstream> // header file for file input and output

// purpose: understanding how to open and close files
// utilizing the fstream library for files
// understanding open function and what it does with files

using namespace std;

int main()
{
    ofstream buckyFile;
    buckyFile.open("tuna.txt"); // opens and creates a new file if it doesn't exist

    buckyFile << "I love tuna and tuna loves me!\n"; // this would store it inside of the txt file
    buckyFile.close(); // when you open a file you also need to close it at the end 

}
