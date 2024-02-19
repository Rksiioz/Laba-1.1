#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class IntPower{
public:
    void setFirst(double first);
    void setSecond(int second);
    void setNum(double num);
    double getFirst() const;
    int getSecond() const;
    double getNum() const;
    double Power();
    bool Read();
    void Display() const;
    bool Init(string doubleString, string intString);

private:
    double first;
    int second;
    double num;
    bool _isValidDouble(const string& doubleString);
    bool _isValidInt(const string& intString);
};