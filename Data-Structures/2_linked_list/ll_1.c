#include <stdio.h>

typedef struct {
    int d;
    Node *p;
} Node;

Node * search(Node * n, int c)
{
    while (n != NULL)
    {
        if (n->d < c)
        {
            return n->p;
        }
        else if (n->d == c)
        {
            return n;
        }
        else
        {
            return NULL;
        }
    }
    
}

int main()
{

    return 0;
}