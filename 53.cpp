// Map In C++ Standard Template Library (STL)
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> MarksMap;
    MarksMap["Ram"] = 99;
    MarksMap["Atul"] = 92;
    MarksMap["Shreya"] = 2;
    MarksMap["Kaka"] = 90;

    MarksMap.insert({{"Rohan", 89}, {"Akshat", 46}});

    map<string, int>::iterator itr;
    for (itr = MarksMap.begin(); itr != MarksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }

    cout << "The size is : " << MarksMap.size() << endl;
    cout << "The max size is : " << MarksMap.max_size() << endl;
    cout << "The empty's return value is : " << MarksMap.empty() << endl;
}