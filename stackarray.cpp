#include <iostream>
using namespace std;

class Stack
{
private:
    int top = -1;
    static const int max_size = 101;
    int stack[max_size];

public:
    void push(int x)
    {
        if (top == max_size - 1)
        {
            cout << "Stack is fulled." << endl;
            return;
        }
        top++;
        stack[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is already empty." << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            return stack[top];
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print()
    {
        cout << "Stack is: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    s.pop();
    s.print();
    int t = s.Top();
    cout << "Top element is: " << t << endl;
    bool e = s.isEmpty();
    if (e == true)
    {
        cout << "Stack is empty. " << endl;
    }
    else
    {
        cout << "Stack constains an elements. " << endl;
    }
    return 0;
}