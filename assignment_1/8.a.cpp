/* 
Date: 4 Dec 2020
Topics: Swap values of two int
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter values of two variables: ";
    cin >> x >> y;
    cout << "The original values of x and y are: " << x << " and " << y << endl;
    z = x;
    x = y;
    y = z;
    cout << "The swapped values of x and y are: " << x << " and " << y << endl;
}