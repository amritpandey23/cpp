/* 
Date: 4 Dec 2020
Topics: Swap values of two int(by reference)
Special:
Notes:
*/

#include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
    int x, y;
    cout << "Enter two variables to swap: ";
    cin >> x >> y;
    cout << "The original values of x and y are: " << x << " and " << y << endl;
    swap(&x, &y);
    cout << "The swapped values of x and y are: " << x << " and " << y << endl;
}

void swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}