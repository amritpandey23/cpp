/* 
Date: 6 dec 2020
Topics: check even or odd number
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number to check its even or odd nature: ";
    cin >> x;
    if (x % 2 == 0)
        cout << "The input number was even." << endl;
    else
        cout << "The input number was odd." << endl;
}