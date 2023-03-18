#include <iostream>
using namespace std;

int main()
{
   int inpNum, zeros, largest = 0;

   cout << "Enter a number: ";
   cin >> inpNum;

   while (inpNum < 0)
     {
        cout << "Please enter a positive number! Try again: ";
        cin >> inpNum;
     }

     if (inpNum == 0)
     {
        cout << "Program exited...";
        exit(0);
     }
     

   while (inpNum > 0) 
   {
      int digit = inpNum % 10;
      
      if (digit == 0)
      {
        zeros++;
      }

      if (digit > largest) 
      {
         largest = digit;
      }

      inpNum /= 10;
   }

   cout << "The amount of zeros are: " << zeros << endl;
   cout << "The largest digit is: " << largest << endl;

   return 0;
}