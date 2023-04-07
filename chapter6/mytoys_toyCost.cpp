#include <iostream>
#include <fstream>
using namespace std;

int mytoys(string fileName)  
{
   string toyNum;
   cout << "How many toys do you want to input?\n";
   cin >> toyNum;
   
   ofstream outfile;
   outfile.open(fileName);

    if (outfile) {
        cout << "File exists..." << endl;
        return 1;
    }
    else {
        cout << "Error: could not open file... " << endl;
        return 0;
    }

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

   return true;
}

int toyCost(string fileName)
{
    ifstream infile;
    infile.open(fileName);

   if (infile) {
        cout << "Data extracted successfully..." << endl;
        return 1;
    }
    else {
        cout << "Error: could not open file... " << endl;
        return 0;
    }

    int totalAmount = 0;
    int totalPrice = 0;
    string toy;
    string amount;
    string price;

    cout << "\nYour toy list:" << endl;

    while (infile >> toy >> amount >> price)
    {
        cout << toy << " " << amount << " $" << price << endl;
        totalPrice += stoi(amount) * stoi(price);
        totalAmount += stoi(amount);
    }

    cout << "\nTotal Toy's Price: $" << totalPrice << endl; 
    cout << "Total Toy's Amount: " << totalAmount << endl;
    
    infile.close();
    
    return true; 

}

int main()
{
    string filename;
    string fileName;
    cout << "Enter the name of the file: ";
    getline(cin, fileName);

    mytoys("mytoys.dat");
    toyCost("mytoys.dat");

    return 0;
}