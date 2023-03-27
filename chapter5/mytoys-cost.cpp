#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("mytoys.dat");

    string toy;
    string amount;
    string price;
    int totalAmount = 0;
    int totalPrice = 0;

    cout << "Your toy list:" << endl;

    while (infile >> toy >> amount >> price)
    {
        cout << toy << " " << amount << " $" << price << endl;
        totalPrice += stoi(amount) * stoi(price);
        totalAmount += stoi(amount);
    }

    infile.close();

    cout << "\nTotal Toy's Price: $" << totalPrice << endl; 
    cout << "Total Toy's Amount: " << totalAmount << endl;

    return 0;
}
