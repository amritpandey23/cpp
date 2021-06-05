#include <iostream>
#include <stdio.h>

using namespace std;

class CLL
{
private:
    struct node
    {
        int data;
        node *next;
    };
    node *tail;

public:
    CLL()
    {
        tail = NULL;
    }
    void insert(int data)
    {
        node *n;
        n = new node;
        n->data = data;
        if (!tail)
        {
            n->next = n;
            tail = n;
        }
        else
        {
            n->next = tail->next;
            tail->next = n;
        }
    }
    void view()
    {
        node *start, *t;
        start = tail->next;
        t = start;
        cout << "LIST: ";
        if (tail)
        {
            while (t->next != start)
            {
                cout << t->data << " ";
                t = t->next;
            }
            cout << endl;
        }
    }
};

int menu()
{
    int ch;
    cout << "1. insert element" << endl;
    cout << "2. view list" << endl;
    cout << "5. exit" << endl;
    cout << "YOUR CHOICE: ";
    cin >> ch;
    return ch;
}

void cll_driver()
{
    CLL my_list;
    int data;
    while (true)
    {
        my_list.view();
        switch (menu())
        {
        case 1:
            cout << "enter value: ";
            cin >> data;
            my_list.insert(data);
            break;
        case 2:
            my_list.view();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "invalid option, try again.";
            break;
        }
    }
}
