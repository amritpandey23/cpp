#include <iostream>
using namespace std;

class Connell
{
private:
    int start = 1;
    int input;

public:
    Connell(int input)
    {
        this->input = input;
    }
    int get_start()
    {
        return start;
    }
    int get_input()
    {
        return input;
    }
    virtual void printNum(int)=0;
};

class Solution : public Connell
{
public:
    Solution(int input) : Connell(input) {}
    void printNum(int n)
    {
        cout << n << " ";
    }
    friend void solve(Solution);
};

void solve(Solution c)
{
    int start = c.get_start();
    int end = c.get_input();
    int ctr = 0;
    cout << start++ << " ";
    for (int i = 0; i < end; i++)
    {
        int val = start * start - (start - 1) * 2;
        for (int j = 0; j < start; j++, val += 2)
        {
            if (ctr > c.get_input() - 2)
            {
                break;
            }
            c.printNum(val);
            ctr++;
        }
        start++;
    }
    cout << "\n";
}

int main()
{
    int inpt;
    cout << "Input: ";
    cin >> inpt;
    cout << "Output: ";
    Solution solu(inpt);
    solve(solu);
    return 0;
}
