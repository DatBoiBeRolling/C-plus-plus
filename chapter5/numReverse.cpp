#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int input1, inpL;
	string input2;
	cout << "Enter a positive integer: ";
	cin >> input1;

	while (input1 < 0)
	{
		cout << "That is not a positive integer, please try again: ";
		cin >> input1;
	}

	input2 = to_string(input1);
	inpL = input2.length();

	while (inpL >= 0)
	{
		cout << input2[inpL] ;
		inpL--;
	}
	cout << endl;
	return 0;
}