/* 
Date: 4 Dec 2020
Topics: Average of 3 numbers
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "The average of " << a << ", " << b << " and " << c << " is " << (a+b+c)/3 << endl;
}