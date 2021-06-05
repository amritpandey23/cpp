// author: Amrit Pandey
// date: 18 feb 21

#include <iostream>
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
        Complex operator+(Complex);                     // operator overloading
        Complex operator-(Complex);
        Complex operator-();
        Complex operator*(Complex);
        bool operator==(Complex);
};

int main()
{
    Complex c1(1, 2), c2(3, -2), c3;
    c3 = c1 + c2;
    c3.show_data();
    c3 = c1 * c2;
    c3 = -c3;
    c3.show_data();
    cout << (c1 == c1) << endl;
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
    cout << "x = " << x << " y = " << y << endl;
}

Complex Complex::operator+(Complex cx)
{
    Complex temp;
    temp.set_data(x + cx.x, y + cx.y);
    return temp;
}

Complex Complex::operator-(Complex cx)
{
    Complex tmp;
    tmp.set_data(x - cx.x, y - cx.y);
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
