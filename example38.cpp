#include <iostream>
#include <fstream>

using namespace std;

// purpose: understading ifstream, the opposite of ofstream, which reads in data from an existing file

int main()
{
    ifstream theFile("beefjerky.txt"); // opposite of ofstream, reading data from a file

    int id;
    string name;
    double money;

    while(theFile >> id >> name >> money) // loop reads first piece of information from beginning of file pointer and end of file pointer and loops each line
    {
        cout << id << name << money << endl;
    }
    
    // while loops runs until reaches end of the file (true); however, when all information is stored and printed, the while loop becomes false, so we do not have to close the file!
}