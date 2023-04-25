#include "calculateSumAvg.h"
#include <fstream>

CalculateSumAvg::CalculateSumAvg() {
    sum = 0;
    count = 0;
}

void CalculateSumAvg::readFromFile(std::string fileName) {
    std::ifstream inputFile(fileName);
    int value;

    while (inputFile >> value) {
        sum += value;
        count++;
    }
}


double CalculateSumAvg::getAverage() {
    if (count == 0) {
        return 0;
    } else {
return static_cast<double>(sum) / count;
    }
}

int CalculateSumAvg::getSum() {
return sum;
}