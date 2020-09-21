//This is simple complex structure.

#include "complex_op.h"

Complex::Complex(double r, double i)
{
    this->re = r;
    this->im = i;
}

Complex::Complex()
{
    this->re = 0;
    this->im = 0;
}

Complex Complex::operator +(const Complex& c)
{
    Complex tmp;
    tmp.re = this->re + c.re;
    tmp.im = this->im + c.im;
    return tmp;
}

Complex Complex::operator -(const Complex& c)
{
    Complex tmp;
    tmp.re = this->re - c.re;
    tmp.im = this->im - c.im;
    return tmp;
}

Complex Complex::operator *(const Complex& c)
{
    Complex tmp;
    tmp.re = this->re*c.re-this->im*c.im;
    tmp.im = this->re*c.im + this->im*c.re;
    return tmp; 
}

void Complex::show()
{
    cout << this->re << " + i" << this->im << '\n';
}
//It is right... Good bye!!!!
