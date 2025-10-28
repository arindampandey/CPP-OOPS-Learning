// Virtual Functions
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 11;
    virtual void display()
    {
        cout << "1. The BaseClass varible var_base is : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 21;
    void display()
    {
        cout << "2. The BaseClass varible var_base is : " << var_base << endl;
        cout << "2. The DerivedClass varible var_derived is : " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    /* Now as we are using the "virtual" keyword before the display() function , the pointer of
    base class will point to the display() function of the object to which the pointer is pointing.*/
    return 0;
}