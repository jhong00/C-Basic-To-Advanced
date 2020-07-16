#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    getline(cin, x); // reading entire line and storing the input into x 
    cout << x << endl;

    string s1 = "hello";
    cout << s1.at(3) << endl; // prints the 3rd element of the string

    for (int x=0; x<s1.length(); x++)
    {
        cout << s1.at(x); // prints out every letter in the string "hello"
    }
}