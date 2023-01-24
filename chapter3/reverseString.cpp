#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string str ("Test string");
	for (int i = 0; i < str.length(); i++)
	{
		cout << str.at(str.length()-1 - i);
	}
	return 0;
}