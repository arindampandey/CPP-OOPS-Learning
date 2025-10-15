/*  ---Exercise---
    Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.
    3. Create another class HybridCalculator and inherit it using these 2 classes.
    4. Create an object of HybridCalculator and display results of the simple and scientific calculator.


    Q1. What type of Inheritance are you using?
    Ans : Multilevel Inheritance .

    Q2. Which mode of Inheritance are you using?
    Ans : Public Mode .

    Q3. How is code reusability implemented?
    Ans : Using Inheritance .
*/

#include <iostream>
#include <cmath>
using namespace std;
class SimpleCal
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter two numbers :" << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "\n---SIMPLE CALCULATOR---\n";
        cout << a << " + " << b << " = " << a + b << endl;
        cout << a << " - " << b << " = " << a - b << endl;
        cout << a << " * " << b << " = " << a * b << endl;
        cout << a << " / " << b << " = " << (float)a / b << endl;
    }
};

class ScientificCal : virtual public SimpleCal
{
public:
    void sOperations()
    {
        cout << "\n---SCIENTIFIC CALCULATOR---\n";
        cout << "Square root of a is " << sqrt(a) << endl;
        cout << "Cuberoot of a is " << cbrt(a) << endl;
        cout << "Square root of b is " << sqrt(b) << endl;
        cout << "Cuberoot of b is " << cbrt(b) << endl;
        cout << "a to the power b is " << pow(a, b) << endl;
    }
};

class HybridCalculator : public ScientificCal
{
};
int main()
{
    HybridCalculator h1;
    h1.input();
    h1.display();
    h1.sOperations();
    return 0;
}