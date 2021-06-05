#include <iostream>
using namespace std;

void insertionSort(int a[], int n) /* */
{
    if (n == 1)
    {
        return;
    }

    int i, j, x;

    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = a[i];
        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

int main()
{
    int a[] = {1, 6, 3, 9, 0};
    insertionSort(a, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
