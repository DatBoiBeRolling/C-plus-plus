#ifndef CALCULATESUMAVG_H
#define CALCULATESUMAVG_H
#include <iostream>

class CalculateSumAvg {
private:
    int sum; // instance variable to store the sum
    int count; // instance variable to store the count of integers

public:
    CalculateSumAvg(); // constructor
    void readFromFile(std::string fileName); // method to read integers from
    double getAverage(); // method to calculate and return the average
    int getSum(); // method to calculate and return the sum
};

#endif