#include <iostream>
using namespace std;

#define STACK_MAX 100
#define INT_MIN -7000

class Stack
{
  private:
    int list[STACK_MAX];
    int top;

  public:
    Stack()
    {
      this->top = -1;
    }

    bool push(int val)
    {
      if (top + 1 >= STACK_MAX)
      {
        cout << "Overflow." << endl;
        return false;
      }
      list[++top] = val;
      return true;
    }

    bool isEmpty()
    {
      return top == -1;
    }

    void print()
    {
      if (isEmpty())
      {
        cout << "Nothing to print: list is empty." << endl;
        return;
      }
      int i = top;
      cout << "TOP -> ";
      while (i != -1)
      {
        cout << list[i] << " "; 
        i--;
      }
      cout << endl;
    }

    int pop()
    {
      if (isEmpty())
      {
        cout << "UNDERFLOW: NOTHING TO POP" << endl;
        return INT_MIN;
      }
      return list[top--];
    }

    void runwizard()
    {
      int x, y;
      while (true)
      {
        cout << "1. PUSH" << endl;
        cout << "2. PRINT" << endl;
        cout << "0. EXIT" << endl;
        cout << "ENTER YOUR CHOICE >>> ";
        cin >> x;
        switch (x)
        {
          case 1:
            {
              cout << "ENTER NEW VALUE: ";
              cin >> y;
              push(y) ? cout << y << " ENTERED SUCCESSFULLY!" << endl : cout << "FAILED TO INSERT " << y << endl;
              break;
            }
          case 2:
            {
              print();
              break;
            }
          case 3:
            {
              y = pop();
              if (y != INT_MIN)
              {
                cout << y << " POPPED SUCCESSFULLY!" << endl;
              }
              break;
            }
          case 0:
            {
              exit(0);
              break;
            }
          default:
            {
              cout << "INVALID OPTION ENTERED. TRY AGAIN" << endl;
              break;
            }
        }
      }
    }
};

int main()
{
  Stack s;
  s.runwizard();
  return 0;
}

