#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("OMG i think I am preggy!");
    cout << s1.substr(17, 7) << endl; // substr function allows you to start at a specific number (17) and end at a specific index (7)

    string one("apples");
    string two("beans");

    cout << one << two << endl;
    one.swap(two);
    cout << one << two << endl; // swaps "one" and "two" 

    cout << s1.find("am") << endl; // checks for "am" from left to right
    cout << s1.rfind("am") << endl; // checks for "am" from right to left

    s1.erase(5); // erases every character after the 5th index
    cout << s1 << endl;

    s1.replace(14, 5, "samuel jackson"); // start at index 14, replace up to 5 characters, replace with "samuel jackson"

    s1.insert(14, "cool"); // starting index (14) and insert "cool" before it
    cout << s1 << endl;


}