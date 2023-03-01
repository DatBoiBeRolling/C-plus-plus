#include <iostream>
using namespace std;

int main()
{
	float num1;
	float num2;
	string op;
	cout << "\nEnter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	cout << "Enter an operator (+,-,*,/): ";
	cin >> op;

	if (op == "+")
	{
		cout << "The sum is: " << num1 + num2;
	}
	else if (op == "-")
	{
		cout << "The difference is: " << num1 - num2;
	}
	else if (op == "*")
	{
		cout << "The product is: " << num1 * num2;
	}
	else if (op == "/")
	{
		cout << "The quotient is: " << num1 / num2;
	}
	cout << endl;
}