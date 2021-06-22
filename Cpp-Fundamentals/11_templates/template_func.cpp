#include <iostream>
using namespace std;

template<class T> T myMin(T a, T b)
{
  return a > b ? b : a;
}

int main()
{
  int a, b;
  float c, d;
  a = 12;
  b = 13;
  c = 1.10;
  d = 1.20;
  cout << myMin(a, b) << endl;
  cout << myMin(c, d) << endl;
  return 0;
}


