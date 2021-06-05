#include <iostream>
#include "complex.h"
using namespace std;

/*
    Here we are going to call by object
*/

class Complex {
    private:
        int x, y;

    public:
        void set_data(int, int);
        void show_data();
        Complex add(Complex);
        Complex sub(Complex);
        Complex mul(Complex);
};

void Complex::set_data(int a, int b)
{
    x = a;
    y = b;
}

void Complex::show_data()
{
    cout << "x = " << x << " y = " << y;
}

Complex Complex::add(Complex cx)
{
    Complex temp;
    temp.set_data(x+cx.x, y+cx.y);
    return temp;
}

Complex Complex::sub(Complex cx)
{
    Complex tmp;
    tmp.set_data(x-cx.x, y-cx.y);
    return tmp;
}

Complex Complex::mul(Complex cx)
{
    Complex tmp;
    tmp.set_data(x*cx.x - y*cx.y, x*cx.y + y*cx.x);
    return tmp;
}

int main()
{
    Complex c1, c2, c3, c4;
    c1.set_data(1, 2);
    c2.set_data(2, 3);
    c4.set_data(7, 6);

    c3 = (c1.add(c2)).mul(c4);
    c3.show_data();
    return 0;
}