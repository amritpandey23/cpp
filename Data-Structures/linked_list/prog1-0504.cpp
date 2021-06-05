#include <iostream>
using namespace std;

#define ll long long
#define ui unsigned int

int n, m, p, arr[10][2];

int main()
{
  cin >> n >> m >> p;
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 2; j++)
      cin >> arr[i][j];

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 2; j++)
      cout << arr[i][j] << " ";


  return 0;
}

