/* 
Date: 6 Dec 2020
Topics: find greater among 3 nos
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    cout << max << " is greatest among the three numbers." << endl;
}