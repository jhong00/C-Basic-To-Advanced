#include <iostream>

using namespace std;

// purpose is to demonstrate using classes in the same file in main classes as well as accessing variables of different classes by other functions 

class StankFist
{
    public:
        StankFist() {stinkyVar = 0;}
    private:
        int stinkyVar;
    
    friend void stinkysFriend(StankFist &sfo); // because we said friend, we can access stinkyVar from StankFist class, we have to pass in (StankFist &sfo)
};

void stinkysFriend(StankFist &sfo)
{
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}

int main()
{
    StankFist obj; // stinkyVar = 0 but no output since no cout, StankFist object needs to be created to allow us to access stinkyVar 
    stinkysFriend(obj); // changes stinkyVar = 99 and output prints since there is cout 
}