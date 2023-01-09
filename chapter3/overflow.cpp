# include <iostream>
using namespace std;

int main() {
    unsigned short int ui = 50000;
    short int si = 50000;

    cout << "ui=" << ui << endl;
    cout << "si=" << si << endl;


    short int num1 = 32767;
    cout << num1 << endl;     // Displays 32767
    num1 = num1 + 1;
    cout << num1 << endl;     // Displays -32768

    unsigned short int num2 = 65535;
    cout << num2 << endl;     // Displays 65536
    num2 = num2 + 1;
    cout << num2 << endl;     // Displays 0
}