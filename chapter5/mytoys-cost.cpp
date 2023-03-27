#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];

    ifstream infile;

    infile.open("mytoys.dat");

    cout << "Reading from the file" << endl;

    infile >> data;
    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}