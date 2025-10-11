// Multilevel Inheritance
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is : " << roll_number << endl;
}

class Exam : public Student
{
protected:
    int DBMS;
    int DS;

public:
    void set_marks(int, int);
    void get_marks(void);
};

void Exam ::set_marks(int m1, int m2)
{
    DBMS = m1;
    DS = m2;
}

void Exam ::get_marks()
{
    cout << "The marks of DBMS are : " << DBMS << endl;
    cout << "The marks of DS are : " << DS << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Ypur result is : " << (DBMS + DS) / 2 << "%" << endl;
    }
};

int main()
{
    Result Arindam;
    Arindam.set_roll_number(21);
    Arindam.set_marks(90, 93);
    Arindam.display_result();
    return 0;
}