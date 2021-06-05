// author: Amrit Pandey
// date: 20-04-2021
#include <iostream>
#include <cfloat>
using namespace std;

struct ListNode
{
    float val;
    struct ListNode *next;
};

class Stack
{
private:
    struct ListNode *top = NULL;

public:
    bool push(float val)
    {
        struct ListNode *newEle = new ListNode;
        newEle->val = val;

        if (top == NULL)
        {
            newEle->next = NULL;
            top = newEle;
            return true;
        }

        newEle->next = top;
        top = newEle;
        return true;
    }

    float pop()
    {
        if (top == NULL)
        {
            return false;
        }

        struct ListNode *s = top;
        top = top->next;
        int returnVal = s->val;
        delete s;
        return returnVal;
    }

    void printList()
    {
        struct ListNode *s = top;
        while (s != NULL)
        {
            cout << s->val << " ";
            s = s->next;
        }
        cout << endl;
    }
};

int main()
{
    // your code here
    Stack s;
    for (float i = 100; i < FLT_MAX; i *= 1.11)
    {
        s.push(i);
    }
    s.printList();
}
