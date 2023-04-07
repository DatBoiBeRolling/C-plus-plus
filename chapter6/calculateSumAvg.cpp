#include <iostream>
#include <fstream>
using namespace std;

int calculations(int& sum, double& avg)
{
    ifstream infile;
    infile.open("calculateSumAvg.txt");

    if (!infile) {
        cout << "Error, could not open file..." << endl;
        return 0;
    }

    int current; // Current number
    int numTotal = 0;
    sum = 0;
    avg;

    while (infile >> current)
    {
        sum += current;
        numTotal++;
    }

    avg = sum/numTotal;
    
    return true;
}

int main()
{
    int sum;
    double avg;
    calculations(sum, avg);

    cout << "The average of the numbers is: " << avg;
}