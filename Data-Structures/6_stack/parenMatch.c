#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

struct Stack
{
    int size;
    int top;
    char *e;
};

int push(struct Stack s, char val)
{
    if (s.top + 1 >= s.size)
    {
        printf("Overflow.\n");
        return FALSE;
    }
    s.e[s.top + 1] = val;
    s.top += 1;
    return TRUE;
}

char pop(struct Stack s)
{
    char res;
    if (s.top == -1)
    {
        return '\0';
    }
    res = s.e[s.top];
    s.top -= 1;
    return res;
}

struct Stack createStack(char *str)
{
    struct Stack s;
    s.top = -1;
    s.size = strlen(str);
    s.e = (char *)malloc(sizeof(char) * strlen(str));
    return s;
}

int parenthesisMatch(struct Stack s, char *exp)
{
    int i;
    i = 0;
    while (exp[i] != '\0')
    {
        if (exp[i] == '(')
        {
            push(s, exp[i]);
        }
        if (exp[i] == ')')
        {
            pop(s);
        }
        i++;
    }
    return s.top == -1;
}

int main()
{
    char *exp = "((1+2)";
    struct Stack s = createStack(exp);
    parenthesisMatch(s, exp) ? printf("YES matching.\n") : printf("NOT matching.\n");
    return 0;
}