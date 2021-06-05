#include <iostream>
using namespace std;

int print_fib(int n)
{
    if (n < 0 || n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return n;
    }
    int res = n + print_fib(n-1);
    cout << n + print_fib(n-1);
    return res;
}

int main()
{
    print_fib(23);
}
