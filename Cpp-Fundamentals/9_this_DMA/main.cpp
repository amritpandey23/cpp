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
        Complex()                                       
        {
            x = 0;
            y = 0;
        }
        Complex(int a, int b)                           
        {
            x = a;
            y = b;
        }
        void set_data(int, int);
        void show_data();
        Complex sum_greater(Complex cx)
        {
            if (x+y > (cx.x + cx.y))
            {
                return *this;
            }
            else
            {
                return cx;
            }
        }
        friend Complex operator+(Complex, Complex);     
        friend Complex operator-(Complex);
        friend void operator>>(istream &, Complex &);   
        Complex operator+(int);
        Complex operator-();
        Complex operator++();
        Complex operator++(int);
        Complex operator*(Complex);
        bool operator==(Complex);
};

int main()
{
    Complex c1(1,2), c2(3,4), c3;
    c3 = c1.sum_greater(c2);
    c3.show_data();
    return 0;
}

// -----------------------------------------------------------------------------

void Complex::set_data(int x, int y)                    // this pointer
{
    this->x = x;
    this->y = y;
}

void Complex::show_data()
{
    cout << "x = " << x << " y = " << y << endl;
}

void operator>>(istream &cin, Complex &c)
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
