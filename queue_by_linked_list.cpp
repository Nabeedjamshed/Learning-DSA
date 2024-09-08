#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

bool isEmpty(){
    if (head == nullptr && tail == nullptr)
    {
        return true;
    } else {
        return false;
    }
}
void enqueue(int n){
    Node* temp = new Node();
    temp->data = n;
    temp->next = nullptr;
    if (isEmpty())
    {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}
void dequeue(){
    Node* temp = head;
    if (isEmpty())
    {
        cout<<"Queue is empty."<<endl;
    } else if (head == tail)
    {
        head = nullptr;
        tail = nullptr;
        delete temp;
    } else {
    head = temp->next;
    delete temp;
    }
}
int front(){
    if (isEmpty())
    {
        cout<<"Queue is empty."<<endl;
    } else {
        return head->data;
    }
}

void print(){
    Node* temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    head = nullptr;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    print();
    dequeue();
    print();
    cout<<"The first element is: "<<front();
    return 0;
}