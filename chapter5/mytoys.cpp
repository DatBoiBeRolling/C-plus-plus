#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
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
