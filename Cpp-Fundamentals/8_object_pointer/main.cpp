#include <iostream>
using namespace std;

class A {
    private:
        int a;
        char *s;
    public:
        A(int x)
        {
            s = "Hello, World";
            a = x;
        }
        int get_a()
        {
            return a;
        }
        char * get_s()
        {
            return s;
        }
};

int main()
{
    A *p;
    A c1(5);
    p = &c1;
    cout << p->get_a() << endl;
    cout << p->get_s() << endl;
    return 0;
}
