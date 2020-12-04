/* 
Date: 1 Dec 2020
Topic: Structures in C++
Special: In C++ structures we can also define functions.
Notes:
*/
#include <iostream>
using namespace std;

struct Book { /* Book Structure */
    /* In C++ we can specify access specifier just as we can in classes. */
    private:
        int bookid;
        char title[20];
        float price;

    public:
    /* Defining functions in structures */
        void input()
        {
            cout << "Enter bookid, title and price: ";
            cin >> bookid;
            cin.ignore();
            cin.getline(title, 20);
            cin >> price;
        }

        void display()
        {
            cout << "bookid: " << bookid << "\ntitle: " << title << "\nprice: " << price << endl;
        }
};

int main()
{
    Book b1; /* book instance */
    b1.input();
    b1.display();
    return 0;
}