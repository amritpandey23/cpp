/* author: Amrit Pandey @ok-ape
*/
#include <iostream>
using namespace std;

int print_nn(int);

int main()
{
    // Write here
    cout << print_nn(6);
    return 0;
}

int print_nn(int lim)
{
    int tb;
    if (lim == 1)
    {
        tb = 1;
    }
    else
    {
        tb = print_nn(lim-1) + 1;
    }
    cout << tb << " ";
    return tb;
}
