#include <iostream>
using namespace std;

class Box
{
public:
    int totalMice;
    Box() {}
    Box(int n)
    {
        totalMice = n;
    }
    static Box destroyBox(Box b, int eats, int fact);
    friend istream &operator>>(istream &s, Box &b)
    {
        s >> b.totalMice;
        return s;
    }
};

Box Box::destroyBox(Box b, int eats, int fact)
{
    return Box((b.totalMice - eats) * fact);
}

int main()
{
    int n, x;
    Box box1;
    cout << "Enter total number of mice in first box: ";
    cin >> box1;
    for (int x = 0; x <= n; x++)
    {
        Box box2 = Box::destroyBox(box1, x, 2);
        Box box3 = Box::destroyBox(box2, x, 3);
        Box box4 = Box::destroyBox(box3, x, 4);
        if (x == box4.totalMice)
        {
            cout << "X = " << x << endl;
            return 0;
        }
    }
    cout << "Cannot find any such value of X!" << endl;
}