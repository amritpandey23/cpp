#include <iostream>
#include <cstring>
using namespace std;

string reverseString(string str, int i = 0)
{
    if (str[i + 1] == '\0')
    {
        str = str[i];
        return str;
    }

    return reverseString(str, i + 1) + str[i];
}

int main()
{
    string name = "amrit pandey";
    name = reverseString(name);
    cout << name << endl;
    return 0;
}
