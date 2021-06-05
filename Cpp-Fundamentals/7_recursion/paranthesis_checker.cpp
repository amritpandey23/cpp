#include <iostream>
using namespace std;

class Stack
{
private:
    char arr[50];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool push(char);
    char pop();
    bool isEmpty();
};

bool Stack::push(char t)
{
    if (top == 49)
        return false;
    arr[++top] = t;
    return true;
}

char Stack::pop()
{
    if (top == -1)
        return '\0';
    return arr[top--];
}

bool Stack::isEmpty()
{
    if (top >= 0)
        return false;
    return true;
}

bool paranthesis_checker(string str)
{
    int i = 0;
    char x, t;
    Stack s;
    while ((t = str[i]) != '\0')
    {
        if (t == '(' || t == '[' || t == '{')
        {
            s.push(t);
        }

        if (t == ')' || t == ']' || t == '}')
        {
            x = s.pop();

            if (x == '\0')
            {
                return false;
            }

            if (
                (t == ')' && x != '(') ||
                (t == ']' && x != '[') ||
                (t == '}' && x != '{'))
            {
                return false;
            }
        }
        i++;
    }

    if (!s.isEmpty())
    {
        return false;
    }

    return true;
}

int main()
{
    string exp = "{[ ]}";
    paranthesis_checker(exp) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
