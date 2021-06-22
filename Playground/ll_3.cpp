#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  struct ListNode *next;
};


void addItem(struct ListNode *list, int val)
{
  struct ListNode *newNode = new struct ListNode;
  newNode->val = val;
  newNode->next = NULL;
  if (list == NULL)
  {
    list = newNode;
    return;
  }
  struct ListNode *ptr = list;
  while (ptr->next != NULL)
  {
    ptr = ptr->next;
  }
  ptr->next = newNode;
}

void printList(struct ListNode *list)
{
  if (list == NULL || list->val == -768)
  {
    cout << "list is empty" << endl;
    return;
  }

  struct ListNode *s = list;
  while (s)
  {
    cout << s->val << "->";
    s = s->next;
  }
}

void printListReverse(struct ListNode *head)
{
  if (head == NULL)
  {
    return;
  }
  printListReverse(head->next);
  cout << head->val << " ";
}

struct ListNode *reverseList(struct ListNode *list)
{
  if (list->next == NULL)
    return list;
  struct ListNode *tmp = reverseList(list->next);
  tmp->next = list;
  return tmp;
}

int main()
{
  struct ListNode *myList = NULL;

  for (int i = 0; i < 10; i++)
  {
    addItem(myList, i);
  }

  printList(myList);

  //  myList = reverseList(myList);

  // printList(myList);

  printListReverse(myList);

  return 0;
}
