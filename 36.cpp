// Initialization List In Constructors
#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : b(j), a(i+b)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : a(i), b(i+j)

    {
        cout << "Constructor Called!!" << endl;
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};

int main()
{
    Test t1(5, 4);
    return 0;
}