#include <stdio.h>
#include <iostream>
using namespace std;

int * solve(int A[])
{
    int low, sp;
    low = sp = 0;
    while (sp < 9)
    {
        if (A[sp] == 0)
        {
            for (int k = sp; k > 0; k--)
                A[k] = A[k-1];
            A[low++] = 0;
        }
        sp++;
    }
    return A;
}

int main()
{
    int input[9];
    cout << "Input: ";
    for (int j = 0; j < 9; j++)
        scanf("%d", &input[j]);
    int * res = solve(input);
    cout << "Output: ";
    for (int i = 0; i < 9; i++)
        cout << res[i] << " ";
    return 0;
}
