#include <iostream>
using namespace std;
#define ARRAY_MAX 100

class Array
{
private:
  int A[ARRAY_MAX];

public:
  Array()
  {
    for (int i = 0; i < 10; i++)
      cin >> A[i];
  }
  int find_duplicate(int q, int l, int h)
  {
    if (l == h)
      return l;
    int mid = (l + h) / 2;
    if (A[mid] <= q)
      h = mid - 1;
    if (A[mid] > q)
      l = mid + 1;
    return find_duplicate(q, l, h);
  }
};

int main()
{
  Array a1;
  cout << a1.find_duplicate(3, 0, 9) << endl;
  return 0;
}
