#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: "; // Input
    getline(cin, input);
    
	bool newWord = true; // Flag

    for (char& x: input) {
        if (newWord && isalpha(x)) {
            x = toupper(x);
            newWord = false;
        }
        else if (isspace(x) || ispunct(x) || isdigit(x)) {
            newWord = true;
        }
    }
    cout << "Converted string: " << input << endl;
}