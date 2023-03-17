#include <iostream>
using namespace std;

int main()
{
   int number1, number2, zeros;
   int largest = 0;

   cout << "Enter a number: ";
   cin >> number1;

   if (number1 < 0)
   {
    cout << "Enter another number: ";
    cin >> number1;

     if (number1 == 0)
     {
        exit(0);
     }
   }

   while (number1 > 0) 
   {
      int digit = number1 % 10;
      
      if (digit == 0)
      {
        zeros++;
      }

      if (digit > largest) 
      {
         largest = digit;
      }

      number1 /= 10;
   }

   cout << "The amount of zeros are: " << zeros << endl;
   cout << "The largest digit is: " << largest << endl;

   return 0;
}