//Concept of Virtual Base Class
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int a)
    {
        roll_number = a;
    }
    void print_rollnumber(void)
    {
        cout << "Your roll number is :" << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, chemistry;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        chemistry = m2;
    }
    void print_marks(void)
    {
        cout << "Your marks are :" << endl
             << "Maths : " << maths << endl
             << "Chemistry : " << chemistry << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display()
    {
        total = maths + chemistry + score;
        cout << "---Result---" << endl;
        print_rollnumber();
        print_marks();
        print_score();
        cout << "Your total score is : " << total;
    }
};

int main()
{
    Result a;
    a.set_rollnumber(21);
    a.set_marks(91.2, 56.0);
    a.set_score(8);
    a.display();
}