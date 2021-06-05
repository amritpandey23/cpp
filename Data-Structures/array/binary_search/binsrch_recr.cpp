#include <iostream>
using namespace std;

int sample[] = {1, 3, 4, 5, 6, 7, 10, 34, 67, 78};

int solve(int samp[], int low, int high, int q)
{
  if (low > high)
    return -1;
  int mid = (high + low) / 2;
  if (samp[mid] == q)
    return mid;
  else
  {
    if (samp[mid] > q)
      high = mid - 1;
    else
      low = mid + 1;
    solve(samp, low, high, q);
  }
}

int main()
{
  cout << "solve: " << solve(sample, 0, 9, 34) << endl;
  return 0;
}

