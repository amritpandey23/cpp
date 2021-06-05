#include <iostream>
using namespace std;

int sample[] = {1, 3, 5, 7, 9, 11, 13, 67};

int solve(int sample[], int size, int q)
{
  int high, mid, low;
  high = size - 1;
  low = 0;
  mid = (low + high) / 2;
  while (low <= high)
  {
    if (sample[mid] == q)
      return mid;
    if (sample[mid] < q)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
    mid = (high + low) / 2;
  }
  return -1;
}

int main()
{
  cout << "solve: " << solve(sample, 8, 65) << endl;
  return 0;
}
