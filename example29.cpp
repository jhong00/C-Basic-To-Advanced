#include <iostream>

using namespace std;

// want to stop changing the type of functions to accept different data types?
// we can use the template <class > keyword to accept different data types

template <class bucky> // using template definition

bucky addCrap(bucky a, bucky b) {
    return a + b;
}

int main() {
    double x = 7.5, y = 43, z;
    z=addCrap(x,y);
    cout << z << endl;
}