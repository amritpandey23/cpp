#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  struct ListNode *next;
};

struct ListNode *createList()
{
  struct ListNode *list = new ListNode;
  list->val = -768;
  list->next = NULL;
  return list;
}

void addItem(struct ListNode *list, int val)
{
  if (list->val == -768)
  {
    list->val = val;
    return;
  }
  struct ListNode *newItem = new ListNode;
  newItem->val = val;
  newItem->next = NULL;
  list->next = newItem;
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
  struct ListNode *myList = createList();

  for (int i = 0; i < 10; i++)
  {
    addItem(myList, i);
  }

  printList(myList);

  //  myList = reverseList(myList);

  // printList(myList);

  return 0;
}
