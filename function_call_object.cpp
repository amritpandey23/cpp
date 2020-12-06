/* 
Date: 5 Dec 2020
Topics: Function call by object returning object.
Special:
Notes:
*/

#include <iostream>
using namespace std;

class Complex
{
    private:
        int x;
        int y;
    public:
        void setData(int a, int b)
        {
            x = a;
            y = b;
        }
        void showData()
        {
            cout << "x=" << x << " y=" << y << endl;
        }
        Complex add(Complex C)
        {
            Complex r;
            r.setData(x+C.x, y+C.y);
            return r;
        }
};

int main()
{
    Complex i1, i2, i3;
    i1.setData(5, 6);
    i2.setData(3, 4);
    i3 = i1.add(i2);
    i3.showData();
    cout << i3.x;
}
