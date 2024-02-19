#pragma once
#include "IntPower.h"

using namespace std;

bool IntPower::Init(string firstStr, string secondStr) {
    if(!this->_isValidDouble(firstStr) || !this->_isValidInt(secondStr)) {
        return false;
    }

    this->first = stod(firstStr);

    if(this->first == 0) {
        return false;
    }

    this->second = stoi(secondStr);

    return true;
}

bool IntPower::Read(){
    string firstStr, secondStr;

    cout << "First: "; cin >> firstStr;
    cout << endl;
    cout << "Second: "; cin >> secondStr;

    return this->Init(firstStr, secondStr);
}

void IntPower::Display() const {
    cout << endl;
    cout << "Numeric: " << num;
}

double IntPower::Power() {
    return num = pow(first, second);
}

double IntPower::getFirst() const {
    return first;
}

int IntPower::getSecond() const {
    return second;
}

double IntPower::getNum() const {
    return num;
}

void IntPower::setFirst(double first) {
    IntPower::first = first;
}

void IntPower::setSecond(int second) {
    IntPower::second = second;
}

void IntPower::setNum(double num) {
    IntPower::num = num;
}

bool IntPower::_isValidDouble(const string &doubleString) {
    bool decimalPoint = false;
    bool hasDigits = false;

    for (size_t i = 0; i < doubleString.length(); ++i) {
        if (doubleString[i] == '-'){
            if(i == 0) {
                continue;
            } else {
                return false;
            }
        }
        if (doubleString[i] == '.' && !decimalPoint) {
            decimalPoint = true;
        } else if (doubleString[i] >= '0' && doubleString[i] <= '9') {
            hasDigits = true;
        } else {
            return false;
        }
    }
    return hasDigits;
}

bool IntPower::_isValidInt(const string &intString) {
    for (size_t i = 0; i < intString.length(); ++i) {
        if (intString[i] < '0' || intString[i] > '9') {
            return false;
        }
    }
    return !intString.empty();
}