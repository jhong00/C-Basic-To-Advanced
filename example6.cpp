#include <iostream>

using namespace std;

// function prototype 
int volume(int l = 1, int w = 1, int h = 1);

int main()
{
    cout << volume(); // remember we need cout to print out function value
}

// function body (do not need default values)
int volume(int l, int w, int h)
{
    return l * w * h;
}