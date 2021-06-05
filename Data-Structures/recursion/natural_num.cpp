#include <iostream>
using namespace std;

void print_n(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    print_n(n-1);
    cout << n << " ";
}

int main()
{
    print_n(10);
}

