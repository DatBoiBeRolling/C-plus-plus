#include "calculateSumAvg.h"
#include <iostream>
#include <string>

int main() {
std::string fileName = "calculateSumAvg.txt";
CalculateSumAvg calculator;
calculator.readFromFile(fileName);
int sum = calculator.getSum();
double average = calculator.getAverage();
std::cout << "Sum: " << sum << std::endl;
std::cout << "Average: " << average << std::endl;
return 0;
}