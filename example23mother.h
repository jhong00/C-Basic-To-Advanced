#ifndef EXAMPLE23MOTHER_H
#define EXAMPLE23MOTHER_H

// base class (class being inherited )

class Mother
{
    public:
        Mother();
        void sayName();
        int publicv = 0; // can be accessed globally 
    protected:
        int protectedv = 0; // can be accessed only when inherited 
    private:
        int privatev = 0; // can't be accessed outside of class
};

#endif // EXAMPLE23MOTHER_H