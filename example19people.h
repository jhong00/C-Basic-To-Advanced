#ifndef EXAMPLE19PEOPLE_H
#define EXAMPLE19PEOPLE_h

#include "example19birthday.h"
#include <string>

using namespace std; 

class People
{
    public: 
        People(string x, Birthday bo); // Birthday is from the birthday class so we need to initialize the member using a list
        void printInfo();
    protected:
    private:
        string name;
        Birthday dateOfBirth;
};










#endif // EXAMPLE19PEOPLE_H