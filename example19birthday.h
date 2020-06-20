#ifndef EXAMPLE19BIRTHDAY_H
#define EXAMPLE19BIRTHDAY_H

class Birthday
{
    public:
        Birthday(int m, int d, int y); // when passing in parameters into constructor, we need to create different named variables 
        void printDate();
    protected:
    private:
        int month;
        int date;
        int year; 
};


#endif // EXAMPLE19BIRTHDAY_H 