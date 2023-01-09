#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const float e = 2.718;
	cout << setw(8) << e << endl;
	cout << e << endl;
	cout << e << endl;

    double a = 3.1415926534;
	double b = 2006.0;
	double c = 1.0e-10;
	cout.precision(5);
	cout << "\ndefault: \n";
	cout << a << '\n' << b << '\n' << c << '\n'<< '\n';

	cout << "fixed:\n" << fixed;
	cout << a << '\n' << b << '\n' << c << '\n'<< '\n';

	cout << "scientific:\n" << scientific;
	cout << a << '\n' << b << '\n' << c << '\n';
	return 0;
}