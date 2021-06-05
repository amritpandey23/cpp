#include <iostream>
using namespace std;

int solve(int *arr, int n)
{
    int ctr, temp;
    ctr = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        while (num)
        {
            if (num % 10 == 4)
            {
                ctr++;
            }
            num /= 10;
        }
        cout << ctr << endl;
        ctr = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n);
    return 0;
}
