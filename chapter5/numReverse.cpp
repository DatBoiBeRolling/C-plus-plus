#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int input1;
	string input2;
	string output;
	cout << "Enter a positive integer: ";
	cin >> input1;

	while (input1<0)
	{
		cout << "That is not a positive integer, please try again: ";
		cin >> input1;
	}

	input2 = to_string(input1);

	for (int i = input2.length(); i >= 0; i--)
	{
		output += input2[i];
	}

	cout << output << endl;
	return 0;
}