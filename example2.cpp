// what are constructors and how to declare them

#include <iostream>
#include <string>

using namespace std;

class BuckysClass
{
    public:
        BuckysClass(string z) // default constructor always similar to class name
        {
            setName(z);
        }

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
    BuckysClass obj1("Jason"); // constructor OBJECT(string z), reason why we aren't calling setName is because BuckysClass already setsName (extended version of example1.cpp)
    cout << obj1.getName(); // call getName to return name 

    BuckysClass obj2("Hong"); // constructor OBJECT(string z)
    cout << obj2.getName(); // call getName to return name
    return 0;
}