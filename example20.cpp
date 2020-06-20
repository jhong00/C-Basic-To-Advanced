#include <iostream>

using namespace std;

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
    StankFist obj; // stinkyVar = 0 but no output since no cout
    stinkysFriend(obj); // changes stinkyVar = 99 and output prints since there is cout 
}