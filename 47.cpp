// Templates with Multiple Parameters
#include <iostream>
using namespace std;

template <class T1, class T2>
class MyClass
{
public:
    T1 data1;
    T2 data2;
    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
    }
};

int main()
{
    MyClass<int, char> obj1(21, 'A');
    obj1.display();
    MyClass<float, char> obj2(1.99, 'H');
    obj2.display();
    return 0;
}