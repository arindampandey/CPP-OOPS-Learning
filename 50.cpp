// Member Function Templates & Overloading Template Functions
#include <iostream>
using namespace std;

template <class T>
class MyClass
{
public:
    T data;
    MyClass(T a)
    {
        data = a;
    }
    void display();
};

// Declaration of function outside class template
template <class T>
void MyClass<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    MyClass<float> obj(5.7);
    cout << obj.data << endl;
    obj.display();
    func(4); // Exact match takes the highest priority
    return 0;
}
