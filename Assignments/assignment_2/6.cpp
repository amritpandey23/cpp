/* 
Date: 6 Dec 2020
Topics: given number is positive, negative or zero
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter any number to check its sign: ";
    cin >> x;
    if (x > 0)
        cout << "The given number was positive." << endl;
    else if (x == 0)
        cout << "The given number was 0." << endl;
    else 
        cout << "The given number was negative" << endl;
}