#include <iostream>
using namespace std;

int stack[100], n = 100, top = -1;

void push(int x) // enters an element into stack 
{
  if (top == n - 1)
  {
    cout << "overflow, stack is full" << endl;
    return;
  }

  stack[top++] = x;
}

int pop() // return last filled element
{
  if (top == -1)
  {
    cout << "underflow, stack is empty" << endl;
    return -1;
  }

  return stack[top--];
}

void printlist()
{
  if (top == -1)
    cout << "list empty" << endl;

  for (int i = top; i > 0; i--)
    cout << stack[i] << " " << endl;
}

int main()
{
  push(-1);
  push(8);
  push(89);
  pop();
  push(78);
  printlist();
  return 0;
}


