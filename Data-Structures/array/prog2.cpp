#include <iostream>
using namespace std;

int A[] = {0, 1, 2, 3, 4, 5, 6, 7};

void rotate(int A[], int ub, int k)
{
  for (int i = 1; i <= k; i++)
  {
    int temp = A[0];
    for (int j = 0; j < ub; j++)
    {
      A[j] = A[j+1];
    }
    A[ub] = temp;
  }
}

void printlist(int A[], int ub)
{
  for (int i = 0; i <= ub; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
}

int main()
{
  rotate(A, 7, 1);
  printlist(A, 7);
  rotate(A, 7, 1);
  printlist(A, 7);
  return 0;
}

