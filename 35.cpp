// Constructors in Derived Class
#include <iostream>
using namespace std;
class Base1
{
protected:
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 constructor called ." << endl;
    }
    void print1(void)
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class Base2
{
protected:
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 constructor called ." << endl;
    }
    void print2(void)
    {
        cout << "The value of data2 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
protected:
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived constructor called ." << endl;
    }
    void print3(void)
    {
        cout << "The value of derived1 is : " << derived1 << endl;
        cout << "The value of derived2 is : " << derived2 << endl;
    }
};

int main()
{
    Derived one(1, 3, 7, 2);
    one.print1();
    one.print2();
    one.print3();
    return 0;
}

// Note : Virtual base class constructors will be called first in the sequence.