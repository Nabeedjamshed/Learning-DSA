#include <iostream>
using namespace std;

class ListNode
{
    int val;
    ListNode *next;

public:
    ListNode *node = nullptr;
    void insert(int n)
    {
        ListNode *temp = new ListNode();
        temp->val = n;
        temp->next = nullptr;
        if (node == nullptr)
        {
            node = temp;
        }
        else
        {
            ListNode *newnode = node;
            while (newnode->next != nullptr)
            {
                newnode = newnode->next;
            }
            newnode->next = temp;
        }
    }
    void print()
    {
        ListNode *temp = node;
        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void sort()
    {
        ListNode *a, *b;
        int temp;
        a = node;
        if (a == nullptr)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            for (a; a->next != nullptr; a = a->next)
            {
                for (b = a->next; b != nullptr; b = b->next)
                {
                    if (a->val > b->val)
                    {
                        temp = a->val;
                        a->val = b->val;
                        b->val = temp;
                    }
                }
            }
        }
    }
};
int main()
{
    ListNode n;
    n.insert(2);
    n.insert(3);
    n.insert(1);
    n.insert(5);
    n.print();
    n.sort();
    n.print();
    return 0;
}

