#include <iostream>
#include <stdlib.h>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode * reverseList(struct ListNode *s)
{
    if (s->next == NULL)
        return s;
    struct ListNode *tmp = reverseList(s->next);
    tmp->next = s;
    tmp->next->next = NULL;
    return tmp;
}

struct ListNode * createList()
{
    struct ListNode *node1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *node2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *node3 = (struct ListNode *)malloc(sizeof(struct ListNode));

    node1->val = 0;
    node1->next = node2;

    node2->val = 100;
    node2->next = node3;

    node3->val = 101;
    node3->next = NULL;

    
    return node1;
}

void printList(struct ListNode *list)
{
    struct ListNode *s = list;
    while (s != NULL)
    {
        cout << s->val << " ";
        s = s->next;
    }
    cout << endl;
}

int main()
{
    struct ListNode *list = createList();
    printList(list);
    list = reverseList(list);
    printList(list);
    return 0;
}
