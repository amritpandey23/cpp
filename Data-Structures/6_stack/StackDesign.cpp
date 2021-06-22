#include <iostream>
using namespace std;

#define STACK_MAX 50

class Stack
{
  private:
    int top;
    size_t size;
    int arr[STACK_MAX];
  public:
    Stack()
    {
      top = -1;
      size = 0;
    }
    void push(int);
    int pop();
    size_t getsize();
    int gettop();
    void print();
    bool isEmpty();
};

bool Stack::isEmpty()
{
  return top == -1;
}

size_t Stack::getsize()
{
  return this->size;
}

void Stack::push(int v)
{
  if (size >= STACK_MAX)
  {
    cout << "Stack Overflow. \n";
    return;
  }
  arr[++top] = v;
}

int Stack::pop()
{
  if (top == -1)
  {
    cout << "Stack Underflow.\n";
    return -786;
  }
  return arr[top--];
}

int Stack::gettop()
{
  return arr[top];
}

void Stack::print()
{
  for (int i = top; i > -1; i--)
  {
    cout << "-----\n";
    cout << "| " << arr[i] << " |\n";
  }
  cout << "-----\n";
}

void insertBottom(Stack &s, int v)
{
  cout << "Ok";
  if (s.isEmpty())
  {
    s.push(v);
    return;
  }
  int x = s.pop();
  insertBottom(s, v);
  s.push(x);
}

int main()
{
  Stack s;
  for (int i = 1; i < 11; i++)
  {
    s.push(i);
  }
  Stack &ref = s;
  insertBottom(ref, 34);
  insertBottom(ref, 56);
  s.print();
  return 0;
}

