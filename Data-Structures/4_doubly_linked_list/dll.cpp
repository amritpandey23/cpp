#include <iostream>
#include <stdio.h>

using namespace std;

class DLL
{
private:
    struct node
    {
        node *prev;
        int item;
        node *next;
    };
    node *start;

public:
    DLL()
    {
        start = NULL;
    }
    void insert_at_first(int data)
    {
        node *n;
        n = new node;
        n->item = data;
        n->prev = NULL;
        if (!start)
        {
            n->next = NULL;
            start = n;
        }
        else
        {
            start->prev = n;
            n->next = start;
            start = n;
        }
    }
    void insert_at_last(int data)
    {
        node *n, *t;
        n = new node;
        n->item = data;
        n->next = NULL;
        if (start == NULL)
        {
            n->prev = NULL;
            start = n;
        }
        else
        {
            t = start;
            while (t->next != NULL)
            {
                t = t->next;
            }
            n->prev = t;
            t->next = n;
        }
    }
    void remove_first()
    {
        node *t, *r;
        if (start != NULL)
        {
            if (start->next == NULL)
            {
                delete start;
                start = NULL;
            }
            else
            {
                r = start->next;
                r->prev = NULL;
                t = start;
                start = r;
                delete t;
            }
        }
    }
    void remove_last()
    {
        node *t;
        t = start;
        if (t)
        {
            if (t->next == NULL)
            {
                start = NULL;
                delete t;
            }
            else
            {
                while (t->next != NULL)
                {
                    t = t->next;
                }
                t->prev->next = NULL;
                delete t;
            }
        }
    }
    void view_list()
    {
        node *t;
        t = start;
        cout << "LIST: ";
        while (t)
        {
            cout << t->item << " ";
            t = t->next;
        }
        cout << endl;
    }
    ~DLL()
    {
        node *t;
        t = start;
        while (start)
        {
            t = start;
            start = start->next;
            delete t;
        }
    }
};

int menu()
{
    int ch;
    cout << "1. insert item at start" << endl;
    cout << "2. insert item at last" << endl;
    cout << "3. remove first" << endl;
    cout << "4. remove last" << endl;
    cout << "5. exit" << endl;
    cout << "YOUR CHOICE: " << endl;
    cin >> ch;
    return ch;
}

int dll_driver()
{
    DLL my_list;
    int data;
    while (true)
    {
        system("cls");
        my_list.view_list();
        switch (menu())
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> data;
            my_list.insert_at_first(data);
            break;
        case 2:
            cout << "Enter value to insert: ";
            cin >> data;
            my_list.insert_at_last(data);
            break;
        case 3:
            my_list.remove_first();
            break;
        case 4:
            my_list.remove_last();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
    }
}
