#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char toys[100];
    int toyNum, price;
    ofstream outfile;

    outfile.open("mytoys.dat");

    cout << "Writing to the file" << endl;
    cout << "How many types of toys do you want to input? \n";
    cin >> toyNum;

    for (int i = 0; i < toyNum; i++)
    {  
        cout << "Please input your toy name and amount: ";
        cin.getline(toys,100);
        outfile << toys;
        return 0;
    }

}