// File I/O : open() and eof()
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample1");
    out << "This is me ." << endl;
    out << "This is you ." << endl;
    out << "Hello .....Hiii" << endl;
    out.close();

    ifstream in;
    string st, st1;
    in.open("sample1");
    // in >> st >> st1;
    // out << st << st1;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}
