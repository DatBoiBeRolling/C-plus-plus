#include <iostream>
using namespace std;

int main()
{
	int end; 		// Ending value of the series
	int sum = 0;		// Sum of the series
	int product = 1;	// Product of the series
	cout << "Enter a number: ";		// Asks the user to enter a number (the end of the series)
	cin >> end;

	for (int i = 1; i <= end; i++)		// Sum calculation
	{
		sum = sum + i;
	}

	for (int j = 1; j <= end; j++)		// Product calculation
	{
		product = product * j;
	}

	cout << "1. The sum of the numbers from 1 to " << end << " is " << sum << endl;		// Sum output message
	cout << "2. The product of the numbers from 1 to " << end << " is " << product << endl;		// Product output message
}