// Class Templates with Default Parameters
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class BMW
{
public:
    T1 Series;
    T2 SaftyRating;
    T3 Torque;
    BMW(T1 a, T2 b, T3 c)
    {
        Series = a;
        SaftyRating = b;
        Torque = c;
    }
    void display()
    {
        cout << "This BMW series is : " << Series << endl;
        cout << "Safety Rating of this BMW is : " << SaftyRating << endl;
        cout << "Torque of this BMW is : " << Torque << endl;
    }
};

int main()
{
    BMW<> obj1(2, 2.1, 'N');
    obj1.display();
    cout << endl;
    BMW<string, int, float> obj2("M SPORT COMPETITION", 5, 350.69);
    obj2.display();
    return 0;
}