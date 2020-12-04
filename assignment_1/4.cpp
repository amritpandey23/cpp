/* 
Date: 4 Dec 2020
Topics: Calculate area of circle
Special:
Notes:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float area, r;
    cout << "Enter radius of circle(in cm): ";
    cin >> r;
    area = M_PI*r*r;
    cout << "The radius of circle is " << area << " cm sq." << endl;
}