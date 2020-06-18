#include <iostream>

using namespace std;

// recursive functions (fibonacci)

int Fibonacci(int x)
{
    if (x == 1) // base case to terminate function 
    {
        return 1;
    }

    else 
    {
        return x * Fibonacci(x-1);
    }
}

int main()
{
    cout << Fibonacci(5) << endl;
    
}