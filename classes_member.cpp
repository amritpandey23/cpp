/*
Date: 3 Dec 2020
Topics: Classes, Member functions and variables
Special: We can define member functions outside classes
         in C++ programming language.

Notes: To declare functions outside classes these two conditions:
       1. Declare functions within class.
       2. Define function using relational operator.
*/

#include <iostream>
using namespace std;

/* class decalaration in C++ */
class Complex {
    private: /* these variables are private and are not direclty accessible via . dot operator
    for example, you cannot do this:
        Complex comp;
        cout << comp.id;
     */
        int id;
        float price;
    
    public:
        void setData(int _id, float _price) /* setter function */
        {
            id = _id;
            price = _price;
        }

        void getData() /* getter function */
        { 
            cout << "ID: " << id << "\nPrice: " << price << endl;
        }

        int getId(); /* declaration of class member function */
};

int Complex::getId()
{ /* defining class member function, usage of :: (scope resolution) operator is necessary. */
    return id;
}

int main()
{
    Complex c1;
    c1.setData(34, 67.88f);
    c1.getData();
    cout << "Id is " << c1.getId() << endl;
}