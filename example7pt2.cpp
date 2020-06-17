#include <iostream>

using namespace std;

// in this example, did not prototype function, simply put printtuna() before main 

int tuna = 69; // global 

int printtuna() // remember this doesn't work if not called, prototype/main
{
   cout << tuna << endl;
}

int main()
{
    double tuna = 20; // local (usable by only MAIN)
    cout << ::tuna << endl; // :: means access global tuna definition
    printtuna(); // calling printtuna function
}
