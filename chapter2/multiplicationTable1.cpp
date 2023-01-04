#include <iostream>
using namespace std;

int num1=1;
int num2=1;
int main()
{
	for(int j = 1; j<=9; j++)
	{
		for (int i = 1; i <= 9; i++)
		{
			cout << num1 << "x" << num2 << "=" << num1 * num2 << "	";
			num2++;
		}
	cout << endl;
	num2 = 1;
	num1++;
	}
}