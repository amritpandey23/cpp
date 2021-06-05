/* 
Date: 4 Dec 2020
Topics: calculate simple interest
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int p, t, r;
    float intr;
    cout << "Enter principle, time and rate: ";
    cin >> p >> t >> r;
    intr = (float)(p*t*r)/100;
    cout << "The interest rate of the given values is " << intr << endl;
}