#include <iostream>

using namespace std;


int tuna = 69; // global 
int printtuna(); // function prototyping

int main()
{
    double tuna = 20; // local (usable by only MAIN)
    cout << ::tuna << endl; // :: means access global tuna definition
    printtuna(); // calling printtuna function
}

int printtuna() // remember this doesn't work if not called, prototype/main
{
    cout << tuna << endl;
}