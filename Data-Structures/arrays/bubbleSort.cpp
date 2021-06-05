#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubbleSort(int a[], int n)
{
    int i, j, flag;

    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - 1 - i; j++)
        {
            flag = 0;
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    bubbleSort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}