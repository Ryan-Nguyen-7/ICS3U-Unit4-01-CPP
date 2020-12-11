// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program ask user a number
//     and calculates the factorial of that number


#include <iostream>
#include <string>


int main() {
    // this function calculates factorials
    int loopCounter = 0;

    std::string integerAsString;
    int integerAsNumber;
    int factorialSum;


    // input
    std::cout << "Enter positive integer: ";
    std::cin >> integerAsString;
    factorialSum = integerAsNumber;
    // process + output
    try {
        integerAsNumber = std::stoi(integerAsString);
        factorialSum = integerAsNumber;

        if (integerAsNumber > 0) {
            while (loopCounter < integerAsNumber) {
            factorialSum = factorialSum + loopCounter;
            loopCounter = loopCounter + 1;
            }
            std::cout << "The factorial of "\
            << integerAsNumber << " is " << factorialSum;
        } else {
            std::cout << "Integer must be positive";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer";
    }
}
