#include <iostream>
#include <stdio.h>
using namespace std;

bool solve(int list[3])
{
    int n, x, k;
    n = list[0];
    x = list[1];
    k = list[2];

    for (int j = 0; j < n + 2; j += k)
    {
        if (j == x)
        {
            return true;
        }
    }

    for (int j = n + 1; j >= 0; j -= k)
    {
        if (j == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int 
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &list[i][0], &list[i][1], &list[i][2]);
    }
    for (int i = 0; i < n; i++)
    {
        solve(list[i]) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
