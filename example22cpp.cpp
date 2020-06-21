#include <iostream>
#include "example22.h"

using namespace std;

Sally::Sally()
{

}


Sally::Sally(int n)
{
    num = n;
}

Sally Sally::operator+(Sally obj) // two sallys in the beginning because we are returning a SALLY not a void or int
{
    Sally brandNew;
    brandNew.num = num + obj.num;
    return(brandNew);
}
