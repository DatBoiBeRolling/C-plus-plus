#include <iostream>
using namespace std;

int main()
{
for(int i=0; i<10; i++)
{
	for(int j=0; j<10-i; j++)
	{
		cout << " ";
	}
	for(int j=0; j < i; j++)
	{
		  cout << "* ";
	}
	 cout << endl;
}
}

