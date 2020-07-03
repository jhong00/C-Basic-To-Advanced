#include <iostream>

using namespace std;

template <class T>
class Spunky
{
    public:
        Spunky(T x){
            cout << x << " is not a character!" << endl; 
        }
};

// creating template specialization for CHAR type only
template<> 
class Spunky<char>{
    public:
        Spunky(char x){
            cout << x << " is indeed a character!" << endl;
        }
};

int main()
{
    Spunky<int> obj1(7); // this basically subs in int into T
    Spunky<double> obj2(3.154); 
    Spunky<char> obj3('q'); // " " apparently used for strings and ' ' are used for individual characters 
}