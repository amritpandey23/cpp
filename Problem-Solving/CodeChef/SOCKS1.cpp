#include <stdio.h>
#include <iostream>
using namespace std;

int socks[3];

bool solve(int socks[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (socks[i] == socks[j])
                return true;
        }
    }
    return false;
}

int main() {
	// your code goes here
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &socks[i]);
    }
    solve(socks) ? cout << "YES" : cout << "NO";

	return 0;
}
