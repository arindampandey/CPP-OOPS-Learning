// File I/O : Reading and Writing Operations
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Hello ....";
    // Opening files using constructor and writing it
    ofstream out("sample1"); // Write operation
    out << st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample2"); // Read operation
    in >> st2;
    getline(in, st2);
    cout << st2;
    return 0;
}
