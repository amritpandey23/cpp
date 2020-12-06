/* 
Date: 6 Dec 2020
Topics: compare two numbers
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers to compare: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " is greater than " << b << endl;
    else if (a == b)
        cout << a << " is equal to " << b << endl;
    else
        cout << a << " is less than " << b << endl;
}