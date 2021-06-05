#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *createLoopedList()
{
    struct ListNode *head = new struct ListNode;
    struct ListNode *looped, *tmp, *prev;

    head->val = 0;
    head->next = NULL;
    prev = head;

    for (int i = 1; i < 11; i++)
    {
        cout << "working" << endl;
        tmp = new struct ListNode;
        tmp->val = i;
        tmp->next = NULL;
        prev->next = tmp;
        if (i == 5)
        {
            looped = tmp;
        }
    }

    tmp->next = looped;

    return head;
}

bool isLoop(struct ListNode *head)
{
    struct ListNode *p, *q;
    p = q = head;

    do
    {
        cout << "OK" << endl;
        p = p->next;
        q = q->next;
        q = q != NULL ? q->next : NULL;
    } while (p && q);

    return p == q;
}

int main()
{
    struct ListNode *head = createLoopedList();
    isLoop(head) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
