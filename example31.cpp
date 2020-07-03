#include <iostream>

using namespace std;

template <class T>

class Bucky{
    T first, second;
    public: 
        Bucky(T a, T b)
        {
            first = a;
            second = b;
        }
        T bigger();
};

template <class T> // have to prototype again c++ syntax

T Bucky<T>::bigger() // function template parameter
{
    return (first > second? first:second);
}

int main()
{
    Bucky <int> obj(2,3);
    cout << obj.bigger();
}