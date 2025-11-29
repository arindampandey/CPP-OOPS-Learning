//Function Templates and Function Templates with Parameters
#include <iostream>
using namespace std;

template <class T1, class T2>
float Average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void Swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
    cout << a << endl << b << endl;
}

int main()
{
    float a = Average(4, 5);
    cout << "Average = "<<a<<endl;
    int x = 5, y = 7;
    cout << "After Swapping : "<<endl;
    Swap(5, 7);
    return 0;
}