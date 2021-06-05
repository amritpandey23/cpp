#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
};

class Solution
{
  ListNode *copyList(ListNode *head)
  {
    ListNode *list, *s, *t;
    list = NULL;
    while (head)
    {
      if (!list)
      {
        list = new ListNode;
        list->val = head->val;
        list->next = NULL;
        t = list;
        head = head->next;
        continue;
      }
      s = new ListNode;
      s->val = head->val;
      s->next = NULL;
      t->next = s;
      t = t->next;
      head = head->next;
    }
    return list;
  }

  ListNode *reverseList(ListNode *head)
  {
    if (head->next == NULL)
    {
      return head;
    }
    ListNode *tmp = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return tmp;
  }

  bool areSameList(ListNode *t1, ListNode *t2)
  {
    while (!t1 || !t2)
    {
      if (t1->val != t2->val)
      {
        return false;
      }
      t1 = t1->next;
      t2 = t2->next;
    }
    return true;
  }

  bool isPalindrome(ListNode *head)
  {
    ListNode *revHead = copyList(head);
    revHead = reverseList(revHead);
    return areSameList(head, revHead);
  }
};

int main()
{
  return 0;
}
