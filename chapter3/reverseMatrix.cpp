#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*for (int i = 24; i >= 0; i--)
	{
		cout << setw(3) << i << "\t";
		if (i%5 == 0)
		{
			cout << endl;
		}
	}
	*/

	for (int i = 4; i >= 0; i--)
	{
		for (int j = 4; j >= 0; j--)
		{
			cout << setw(3) << j + i * 5;
		}
		cout << endl;
	}
}