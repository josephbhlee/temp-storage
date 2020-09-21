// This file made by Joseph Lee for testing.

#include <iostream>

using namespace std;

class Complex {

    double re;
    double im;
public:
    Complex(double r, double i);
    Complex();
    Complex operator +(const Complex& c);
    // + Operator Overloading
    Complex operator -(const Complex& c);
    // - Operator Overloading
    Complex operator *(const Complex& c);
    void show();
};
