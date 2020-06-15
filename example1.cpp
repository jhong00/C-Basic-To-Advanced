// when trying to call a function in class, ALWAYS have to create an object first... 
// SETTERS and GETTERS 
#include <iostream>
#include <string>
using namespace std;

class BuckysClass
{
    public: // good practice to create private functions and add objects through public 
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name;
        }
    private:
        string name;
};

int main()
{
    BuckysClass test; 
    test.setName("Jason");
    cout << test.getName() << endl;
    return 0;
}