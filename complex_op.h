#include <iostream>

using namespace std;

class Complex {

    double re;
    double im;
public:
    Complex(double r, double i);
    Complex();
    Complex operator +(const Complex& c);
    // + 연산자 중복
    Complex operator -(const Complex& c);
    // - 연산자 중복
    void show();
};
