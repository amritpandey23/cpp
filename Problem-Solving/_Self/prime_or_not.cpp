#include <iostream>
using namespace std;

float sqrt(float x)
{
    float e, low, high, mid;
    e = 0.001;
    low = 0 + e;
    high = x + e;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (x - mid * mid == e)
        {
            return mid;
        }
        if (mid * mid >= x)
        {
            high = mid - e;
        }
        else
        {
            low = mid + e;
        }
        mid = (low + high) / 2;
    }
    return mid;
}

bool prime_or_not(int x)
{
    int i, flag;
    flag = 1;
    for (i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime_or_not(n) ? cout << n << " is a prime number." << endl : cout << n << " is not a prime number." << endl;
    return 0;
}
