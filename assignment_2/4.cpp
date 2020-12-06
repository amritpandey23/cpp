/* 
Date: 6 Dec 2020
Topics: nature of roots of quadratic equation.
Special:
Notes:
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter cofficients of quatradic equation(a, b, c): ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    if (d > 0)
        cout << "The roots of the equation are real and distinct." << endl;
    else if (d == 0)
        cout << "The roots of the equation are real and equal." << endl;
    else
        cout << "The roots are distinct and imaginary." << endl;
}