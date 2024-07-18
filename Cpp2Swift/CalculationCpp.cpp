//
//  CalculationCpp.cpp
//  Cpp2Swift
//
//  Created by pnkbksh on 08/07/24.
//

#include "CalculationCpp.hpp"
#include <stdio.h>

using namespace std;
//functions definations

int multiplyArray(const std::vector<int>& numArray) {
    cout << "C++ multiply Array function called. ";
    int finalValue = 0;
    for (size_t i = 0; i < numArray.size(); ++i) {
        finalValue += numArray[i];
    }
    return finalValue;
}


int add(int num1, int num2) {
    cout << "C++ add function called. ";
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;
    return num1 + num2;
}

int multiply(int num1, int num2) {
    cout << "C++ multiply function called. ";
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;
    return num1 * num2;
}

int subtract(int num1, int num2) {
    cout << "C++ subtract function called. ";
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;
    return num1 - num2;
}

