#include <iostream>
using namespace std;

int main(){

	string input;	// String inputed by user
	int counter;	// Stores how many a's are in the string

	cout << "Type anything: ";	// Asks user to enter a string (stored in input variable)
	getline(cin, input);

	for (int i = 0; i <= input.length()-1; i++)		// Evaluates each letter
	{
		if (input.at(i) == 'a')		// If the highlighted letter is 'a', add 1 to the counter
		{
			counter++;
		}
	}
	cout << "The number of a's in your string is: " << counter << endl;		// Output statement
}
