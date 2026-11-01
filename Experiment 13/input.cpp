
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream createFile("source.txt");
    createFile << "Hello, this is a source file.";
    createFile.close();

    ifstream inFile("source.txt");
    ofstream outFile("copy.txt");

    if (!inFile || !outFile)
    {
        cout << "Error opening file!";
        return 1;
    }

    outFile << inFile.rdbuf();

    cout << "File copied successfully.";

    inFile.close();
    outFile.close();

    return 0;
}
