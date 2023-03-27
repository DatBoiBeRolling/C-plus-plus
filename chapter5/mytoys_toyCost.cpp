#include <iostream>
#include <fstream>
using namespace std;

int mytoys()  
{
   string toyNum;
   cout << "How many toys do you want to input?\n";
   getline(cin, toyNum);
   
   ofstream outfile("mytoys.dat");
   
   for (int i = 1; i <= stoi(toyNum); i++) {
      string toy, price;
      cout << "\nPlease input your toy name and amount:\n";
      getline(cin, toy);

      unsigned seed = time(0);
      srand(seed);
      price = " " + to_string(rand() % 100 + 1);

      outfile << toy << price << endl;
   }
   
   outfile.close();
}

int toyCost()
{
    ifstream infile;
    infile.open("mytoys.dat");

    string toy;
    string amount;
    string price;
    int totalAmount = 0;
    int totalPrice = 0;

    cout << "\nYour toy list:" << endl;

    while (infile >> toy >> amount >> price)
    {
        cout << toy << " " << amount << " $" << price << endl;
        totalPrice += stoi(amount) * stoi(price);
        totalAmount += stoi(amount);
    }

    infile.close();

    cout << "\nTotal Toy's Price: $" << totalPrice << endl; 
    cout << "Total Toy's Amount: " << totalAmount << endl;
}

int main()
{
    mytoys();
    toyCost();

    return 0;
}