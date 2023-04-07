#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed the random number generator with the current time

    for (int i = 0; i < 100; i++) {
        int rand_num = rand(); // generate a random integer between 1 and 100
        cout << rand_num << endl; // print the integer on a new line
    }

    return 0;
}

