// Pointer to Objects and Arrow Operator
#include <iostream>
using namespace std;
class Complex
{
protected:
    int real, imaginary;

public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void get_data(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    // Complex c1;
    // c1.set_data(2, 6);
    // c1.get_data();

    Complex *ptr = new Complex;
    (*ptr).set_data(3, 8);
    (*ptr).get_data();

    // Arrow operator
    ptr->set_data(1, 3);
    ptr->get_data();

    // Array of Objects
    Complex *ptr1 = new Complex[5];
    ptr1->set_data(6, 12);
    ptr1->get_data();
    return 0;
}