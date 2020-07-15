#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream jasonsFile("beefjerky.txt");

    if (jasonsFile.is_open()){
        cout << "okay the file is open!" << endl;
    }

    else{
        cout << "you need to close the file!" << endl;
    }

    jasonsFile << "I love the beef!\n";
    jasonsFile.close();

}