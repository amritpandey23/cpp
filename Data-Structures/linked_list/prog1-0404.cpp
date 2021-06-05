#include <iostream>
using namespace std;

unsigned int menu()
{
    unsigned int x;
    cout << "1. Add item" << endl;
    cout << "Enter 0 to exit." << endl;
    cout << "Enter your choice: " << endl;
    cin >> x;
    return x;
}

typedef struct
{
    string identifier;
    bool val;
} Particle;

typedef struct
{
    Particle *p;
    Node *next;
} Node;

class List
{
private:
    Node *head;
    unsigned int length;

public:
    List()
    {
        head = NULL;
        length = 0;
    }
    List(string id, bool val)
    {
        Node *head = new Node;
        Particle *part = new Particle;
        part->identifier = id;
        part->val = val;
        head->p = part;
        head->next = NULL;
        this->head = head;
    }
    List(List &lcopy)
    {
        this->length = lcopy.len();
        this->head = lcopy.get_head();
    }
    void add_item(string id, bool value)
    {
        if (head)
        {
            Particle *ele = new Particle;
            ele->identifier = id;
            ele->val = val;
            Node *nd = new Node;
            nd->p = ele;
            nd->next = NULL;
            Node *s = head;
            while (s != NULL)
            {
                s = s->next;
            }
            s->next = ele;
        }
        else
        {
            Node *head = new Node;
            Particle *part = new Particle;
            part->identifier = id;
            part->val = val;
            head->p = part;
            head->next = NULL;
            this->head = head;
        }
    }
    unsigned int len()
    {
        return length;
    }
    Node *get_head()
    {
        return head;
    }
    void start()
    {
        int x = 1;
        while (x)
        {
            system("cls");
            x = menu();
            string id;
            bool val;
            switch (x)
            {
            case 0:
                cout << "exiting ..." << endl;
                exit(0);
            case 1:
                cout << "Enter identifier: ";
                cin >> id;
                cout << "Enter value: ";
                cin >> val;
                add_item(id, val);
                break;
            defaut:
                cout << "You've entered wrong choice\nTry again." << endl;
                break;
            }
        }
    }
};

int main()
{
    List l;
    l.start();
    return 0;
}
