#include <iostream>
using namespace std;

int solve(int n, int arr[], int k)
{
  int high, low, mid;
  high = n - 1;
  low = 0;
  mid = (high + low) / 2;
  while (low <= high)
  {
    if (arr[mid] == k)
      return mid;
    else
    {
      if (arr[mid] < k)
        high = mid - 1;
      else
        low = mid + 1;
      mid = (high + low) / 2;
    }
  }
  return -1;
}

int main()
{
  int n, k;
  cout << "Enter n: ";
  cin >> n;
  int arr[n];
  cout << "Fill in the " << n << " elements of the array";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter search element: ";
  cin >> k;
  cout << "solve: " << solve(n, arr, k) << endl; 
  return 0;
}


