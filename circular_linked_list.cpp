#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = nullptr;
Node *insertatbegin(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = nullptr;
    Node *newnode = head;
    if (head == nullptr)
    {
        head = temp;
        temp->next = head;
    }
    else
    {
        do
        {
            newnode = newnode->next;
        } while (newnode->next != head);
        newnode->next = temp;
        temp->next = head;
        head = temp;
    }
    return head;
}

Node *insertatend(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = nullptr;
    Node *newnode = head;
    if (head == nullptr)
    {
        head = temp;
        temp->next = head;
    }
    else
    {
        do
        {
            newnode = newnode->next;
        } while (newnode->next != head);
        newnode->next = temp;
        temp->next = head;
    }
    return head;
}

Node *deleteatbegin(Node *head)
{
    Node *temp = head;
    Node *newnode = head;
    if (head == nullptr)
    {
        return head;
    }

    do
    {
        newnode = newnode->next;
    } while (newnode->next != head);
    head = temp->next;
    newnode->next = head;
    delete temp;
    return head;
}

Node *deleteatend(Node *head)
{
    Node *temp = head;
    Node *prev = nullptr;
    do
    {
        prev = temp;
        temp = temp->next;
    } while (temp->next != head);
    prev->next = head;
    delete temp;
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
int main()
{
    head = nullptr;
    head = insertatbegin(head, 4);
    head = insertatbegin(head, 3);
    head = insertatbegin(head, 2);
    head = insertatbegin(head, 1);
    print(head);
    head = insertatend(head, 54);
    print(head);
    head = deleteatbegin(head);
    print(head);
    head = deleteatend(head);
    print(head);
    return 0;
}