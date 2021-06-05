// author: Amrit Pandey
// date: 18 feb 21

#include <iostream>
using namespace std;

class Complex
{
    private:
        int x, y;

    public:
        Complex()                                       // default constructor will not be defined
        {
            x = 0;
            y = 0;
        }
        Complex(int a, int b)                           // constructor overloading: parametrized constructor
        {
            x = a;
            y = b;
        }
        // Complex(Complex ct)                          // wrong implementation of copy constructor
        // {
        //     x = ct.x;
        //     y = ct.y;
        // }
        // reason: when the constructor is called, it'll make a formal parameter
        // of type complex. this parameter is created so that the values of passed
        // or actual parameter is copied into it. But the moment it makes a 
        // formal parameter, it'll have to again call the constructor, for which
        // it'll go into infinite recursion. Hence we pass the reference variable
        // itself instead of creating a formal parameter.
        Complex(Complex &ct)                            // correct implementation of copy constructor
        {
            x = ct.x;
            y = ct.y;
        }
        void set_data(int, int);
        void show_data();
        Complex add(Complex);
        Complex sub(Complex);
        Complex mul(Complex);
};

int main()
{
    Complex c1(1, 2), c2, c3;
    c2 = c1; 
    c2.show_data();
    return 0;
}

// -----------------------------------------------------------------------------

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
    temp.set_data(x + cx.x, y + cx.y);
    return temp;
}

Complex Complex::sub(Complex cx)
{
    Complex tmp;
    tmp.set_data(x - cx.x, y - cx.y);
    return tmp;
}

Complex Complex::mul(Complex cx)
{
    Complex tmp;
    tmp.set_data(x * cx.x - y * cx.y, x * cx.y + y * cx.x);
    return tmp;
}
