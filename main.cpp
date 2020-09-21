#include "complex_op.h"

int main()
{
    Complex a(1.2,10.6), b(2.3, 5), c(2.0,4.4);
    Complex sum, dif;

    cout <<" a: " ;
    a.show() ;
    cout <<endl;

    cout <<" b: " ;
    b.show() ;
    cout <<endl;

    cout <<" c: " ;
    c.show() ;
    cout <<endl;

    sum = a + b; // 연산자 함수 + 호출
    cout << "a + b = "; sum.show();
    dif = a - b; // 연산자 함수 - 호출
    cout << "a - b = "; dif.show();
    sum = a + b + c; // 연산자 함수 + 호출
    cout << "a + b + c = "; sum.show();

    return 0;

}

