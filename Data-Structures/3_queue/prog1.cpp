#include <iostream>
using namespace std;

class Queue
{
private:
	int *list, front, rear, n;

public:
	Queue(int n)
	{
		this->n = n;
		int list[n];
		this->list = list;
		front = rear = -1;
	}

	void enq(int e)
	{
		if ((rear + 1) % n == front)
		{
			cout << "overflow" << endl;
			return;
		}
		if (rear == front == -1)
		{
			front = rear = 0;
		}
		else
		{
			rear = (++rear) % n;
		}
		this->list[rear] = e;
	}

	int deque()
	{
		if (front == rear == -1)
		{
			cout << "underflow" << endl;
			return NULL;
		}
		if (front == rear)
		{
			return this->list[front];
		}
		return NULL;
	}

	void printq()
	{
		for (int i = front; i <= rear; i++)
		{
			cout << list[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Queue q(6);
	q.enq(10);
	q.enq(11);
	q.printq();
	return 0;
}
