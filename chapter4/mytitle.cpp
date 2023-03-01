#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
	bool newWord = true; // Flag

    for (char& c: input) {
        if (newWord && isalpha(c)) {
            c = toupper(c);
            newWord = false;
        }
        else if (isspace(c) || ispunct(c) || isdigit(c)) {
            newWord = true;
        }
    }
    cout << "Converted string: " << input << endl;
}