// author: Amrit Pandey
// date: 18 feb 21

#include <iostream>
#include <istream>
using namespace std;

class Complex
{
    private:
        int x, y;

    public:
        Complex()                                       // default constructor will not be created by compiler
        {
            x = 0;
            y = 0;
        }
        Complex(int a, int b)                           // constructor overloading: parametrized constructor
        {
            x = a;
            y = b;
        }
        void set_data(int, int);
        void show_data();
        friend Complex operator+(Complex, Complex);     // operator overloading using friend
        friend Complex operator-(Complex);
        friend void operator>>(istream &, Complex &);   // using friend function to cin the values into a complex object
        Complex operator+(int);
        Complex operator-();
        Complex operator++();
        Complex operator++(int);
        Complex operator*(Complex);
        bool operator==(Complex);
};

int main()
{
    Complex c1;
    cout << "Enter complex number: ";
    cin >> c1;                                          // reference of cin and c1 is passed into >> operator call
    c1.show_data();
}

// -----------------------------------------------------------------------------

void Complex::set_data(int a, int b)
{
    x = a;
    y = b;
}

void Complex::show_data()
{
    cout << "x = " << x << " y = " << y << endl;
}

void operator>>(istream &cin, Complex &c)               // very important
{
    cin >> c.x >> c.y;
}

Complex Complex::operator++()
{
    Complex t;
    t.x = ++x;
    t.y = ++y;
    return t;
}

Complex Complex::operator++(int)
{
    Complex t;
    t.x = x++;
    t.y = y++;
    return t;
}

Complex operator+(Complex ca, Complex cb)
{
    Complex temp;
    temp.set_data(ca.x + cb.x, ca.y + cb.y);
    return temp;
}

Complex Complex::operator+(int n)
{
    Complex t;
    t.x = x + n;
    t.y = y;
    return t; 
}

Complex operator-(Complex cx)
{
    Complex tmp;
    tmp.set_data(-cx.x, -cx.y);
    return tmp;
}

Complex Complex::operator-()
{
    Complex tmp;
    tmp.x = -x;
    tmp.y = -y;
    return tmp;
}

Complex Complex::operator*(Complex cx)
{
    Complex tmp;
    tmp.set_data(x * cx.x - y * cx.y, x * cx.y + y * cx.x);
    return tmp;
}

bool Complex::operator==(Complex cx)
{
    if (x != cx.x || y != cx.y)
    {
        return false;
    }
    return true;
}
