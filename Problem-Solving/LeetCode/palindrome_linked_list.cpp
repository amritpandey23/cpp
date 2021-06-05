struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head->next == NULL)
            return true;

        if (!head)
            return false;

        int num, i, revnum, copynum;
        num = i = revnum = copynum = 0;
        ListNode *s = head;

        while (s)
        {
            num += s->val * (i++) * 10;
            s = s->next;
        }

        copynum = num;

        while (copynum != 0)
        {
            revnum = revnum * 10 + (copynum % 10);
            copynum /= 10;
        }

        if (revnum == num)
            return true;

        return false;
    }
};

int main()
{
    return 0;
}
