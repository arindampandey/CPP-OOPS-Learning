#include <iostream>
using namespace std;
int sum(int a , int b)
{
    cout <<"Using 2 arguments ";
    return a+b;
}
int sum(int a , int b , int c)
{
    cout <<"Using 3 arguments ";
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout << "The sum of 10 and 25 is :"<< sum(10,25)<<endl;
    cout << "The sum of 101 and 25 and 1 is :"<< sum(101,25,1)<<endl;
    return 0;
}