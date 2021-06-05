#include <iostream>
using namespace std;

class Test {
    private:
        int a, b;
    public:
        Test()
        {
            a = 0;
            b = 0;
        }
        friend void f1();                           // friend function declaration
};

void f1()
{
    cout << "a = " << a << endl;
}

int main()
{
    return 0;
}
