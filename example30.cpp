#include <iostream>

using namespace std;

template <class A, class B> // programmers usually use one letter

A smaller(A a, B b){
    return(a < b ? a : b); // this means if a is less than b, return a otherwise b 
}

int main()
{
    int x = 89;
    double y = 56.78;

    cout << smaller(y,x) << endl; // y = input for A and x = input for B, A in the beginning of the function indicates return type 
}