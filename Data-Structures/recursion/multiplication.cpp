#include <iostream>
using namespace std;

int mul(int n, int i)
{
    if (i == 1)
    {
        return n;
    }
    return n + mul(n, i - 1);
}

int main()
{
    cout << mul(6,2) << endl;
}