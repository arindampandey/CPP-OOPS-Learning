// Multiple Inheritance
#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    int set_base1(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    int set_base2(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "The value of base1 is :" << base1int << endl;
        cout << "The value of base2 is :" << base2int << endl;
        cout << "The sum of base1 and base2 is :" << base1int + base2int << endl;
    }
};

int main()
{
    Derived d1, d2;
    d1.set_base1(5);
    d1.set_base2(6);
    d1.display();
    d2.set_base1(4);
    d2.set_base2(11);
    d2.display();
    return 0;
}
