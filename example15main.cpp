#include <iostream>
#include "example15.h"
using namespace std;

// purpose: demonstrate arrow member selection operator which is used for specifically pointers 

int main()
{
    Sally obj1;
    Sally *ptr1 = &obj1;

    obj1.printCrap(); // 
    ptr1->printCrap(); // pointer to obj1, arrow member selection operator is used for pointers 
}
