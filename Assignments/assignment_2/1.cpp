/* 
Date: 6 Dec 2020
Topics: check whether a given number is divisible by 7
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number to check its divisibility by 7: ";
    cin >> a;
    if (a%7 == 0)
        cout << "The number " << a << " is divisible by 7." << endl;
    else
        cout << "The number " << a << " is not divisible by 7." << endl;
}