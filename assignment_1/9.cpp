/* 
Date: 4 Dec 2020
Topics: Takes char from user and prints its ascii value
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    char i;
    cout << "Enter desired character: ";
    cin >> i;
    cout << "The ascii value of " << i << " is " << (int)i << endl;
}