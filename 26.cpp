// More on Destructors.
#include <iostream>
using namespace std;

class FileHandler
{
    string fileName;

public:
    FileHandler(string name)
    {
        fileName = name;
        cout << "Opening file: " << fileName << endl;
    }

    void writeData()
    {
        cout << "Writing data into file: " << fileName << endl;
    }

    // Destructor
    ~FileHandler()
    {
        cout << "Closing file: " << fileName << endl;
    }
};

int main()
{
    cout << "Program started!" << endl;

    {
        FileHandler fh1("data.txt");
        fh1.writeData();

        FileHandler fh2("log.txt");
        fh2.writeData();

        cout << "Objects will go out of scope soon..." << endl;
    }

    cout << "Program ended!" << endl;
    return 0;
}