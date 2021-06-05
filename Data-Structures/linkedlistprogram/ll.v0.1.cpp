/* PROGRAM: Linked List program v0.1
AUTHOR: Amrit Pandey @ok_ape
DATE: 05 Jan 2021 */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*  ------------
    DECLARATIONS
    ------------  */
int menu(); /* print list of actions */
struct Node { /* individual item in list */
    int data;
    Node *next;
};
class List { /* list */
    private:
        Node *start;
    public:
        List() { /* constructor */
            start = NULL;
        }
        ~List() { /* destructor: to free memory when the list is dropped */
            while(start != NULL)
                removeFirstItem();
        }
        void addItem(int);
        void removeFirstItem();
        void showItems();
};
/*  -----
    MAIN
    -----  */
int main()
{
    List myList; /* create list */
    int val;
    while(true) /* while true: keep giving end user action options */
        switch (menu()) {
            case 1:
                cout << "Enter the value to add: ";
                cin >> val;
                myList.addItem(val);
                break;
            case 2:
                myList.showItems();
                break;
            case 3:
                myList.removeFirstItem();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "\nInvalid response, try again: ";
        }
}
/*  ---------------------
    LIST MEMBER FUNCTIONS
    ---------------------  */
/* List.addItem(int) */
void List::addItem(int x) /* adds item to the list */
{
    Node *i, *temp = new Node;
    i = start;
    temp->data = x;
    temp->next = NULL;
    if(start == NULL)
        start = temp;
    else {
        while(i->next != NULL)
            i = i->next;
        i->next = temp;
    }
}
/* List.showItems() */
void List::showItems() /* display all items in the list */
{
    Node *i;
    i = start;
    if (start == NULL)
        cout << "list is empty, nothing to show!\n";
    else {
        while(i != NULL) {
            cout << i->data << " ";
            i = i->next;
        }
        cout << endl;
    }
}
/* List.removeFirstItem() */
void List::removeFirstItem() /* removes first item from list */
{
    if(start->next == NULL)
        start = NULL;
    else
        start = start->next;
}
/*  ------
    OTHERS
    ------  */
int menu() /* displays all actions to end user */
{
    int r;
    cout << "Choose an option from the given choices\n";
    cout << "1) add an item\n";
    cout << "2) show all items\n";
    cout << "3) remove first item\n";
    cout << "4) exit\n";
    cout << "> ";
    cin >> r;
    return r;
}