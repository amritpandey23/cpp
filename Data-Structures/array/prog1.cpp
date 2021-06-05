#include <iostream>
using namespace std;

#define ARRAY_MAX 40

class Array
{
private:
	int A[ARRAY_MAX];
	int ub, lb, n;

public:
	Array()
	{
		ub = lb = n = 0;
	}
	void printlist()
	{
		cout << "LIST: ";
		for (int k = lb; k <= ub; k++)
			cout << A[k] << " ";
		cout << endl;
	}
	void insert(int q, int i)
	{
		if ((ub + 1) >= ARRAY_MAX)
		{
			cout << "overlflow occured." << endl;
			return;
		}
		for (int k = ub; k > i; k--)
		{
			A[k + 1] = A[k];
		}
		if (!i)
		{
			ub++;
		}
		n++;
		A[i] = q;
	}
	void insert(int q)
	{
		int i;
		if (n > 0)
		{
			i = ub + 1;
		}
		else
		{
			i = ub;
		}
		if ((ub + 1) >= ARRAY_MAX)
		{
			cout << "overlflow occured." << endl;
			return;
		}
		for (int k = ub; k > i; k--)
		{
			A[k + 1] = A[k];
		}
		if (!i)
		{
			ub++;
		}
		n++;
		A[i] = q;
	}
};

int main()
{
	Array A;
	A.insert(1);
	A.insert(2);
	A.printlist();
	return 0;
}
