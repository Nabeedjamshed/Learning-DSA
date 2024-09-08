#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;
Node* insert(Node* head, int x){
    Node *temp1 = new Node();
    temp1->data = x;
    temp1->next = nullptr;
    if (head == nullptr)
    {
        head = temp1;
    } else {
        Node *newnode = head;
        while(newnode->next != nullptr){
            newnode = newnode->next;
        }
        newnode->next = temp1;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}