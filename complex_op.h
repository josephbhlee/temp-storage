#include <iostream>

using namespace std;

class Complex {

    double re;
    double im;
public:
    Complex(double r, double i);
    Complex();
    Complex operator +(const Complex& c);
    // + ������ �ߺ�
    Complex operator -(const Complex& c);
    // - ������ �ߺ�
    void show();
};
