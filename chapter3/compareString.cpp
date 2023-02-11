#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	// Declaration Section
	string str_inp1;
	string str_inp2;
	int res;

	// Input Section
 	cout << "Enter a string: ";
	cin >> str_inp1;
	cout << endl;
	cout << "Enter another string: ";
	cin >> str_inp2;
	cout << endl;

	// Result

	// strcompare method
	char array1[] = "hello";
	char array2[] = "helo";
	printf("%d\n", strcmp(array1,array2));

	// Compare method
	res = str_inp1.compare(str_inp2);
	if (res == 0)
	{
		cout << "The strings are equal!" << endl;
	}
	else if (res < 0)
	{
		cout << "Your first string is bigger than your second!" << endl;
	}
	else
	{
		cout << "Your first string is smaller than your second!" << endl;
	}

	// Operators method

	if (str_inp1 == str_inp2)
	{
		cout << "The strings are equal!" << endl;
	}
	else if (str_inp1 > str_inp2)
	{
		cout << "Your first string is bigger than your second!" << endl;
	}
	else
	{
		cout << "Your first string is smaller than your second!" << endl;
	}



}