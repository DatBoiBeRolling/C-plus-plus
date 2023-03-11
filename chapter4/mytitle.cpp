#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main() {
    string input;
    string output = "";
    cout << "Enter a string: "; // Input
    getline(cin, input);
    
	bool newWord = true; // Flag

    for (int i = 0; i <= input.length(); i++)
    {
        if (newWord && isalpha(input[i]))
     {
            toupper(input[i]);
            output += input[i];
            newWord = false;
     }
        else if (ispunct(input[i]) || isdigit(input[i]))
     {
         output += " ";
          newWord = false;
      }

      if (isspace(input[i-1]))
      {
          output += " ";
          newWord = true;
     }
    }

    cout << "Converted string: " << output << endl;
}