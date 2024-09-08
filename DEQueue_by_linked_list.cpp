#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;
Node* previous = nullptr;
bool isEmpty(){
    if (head == nullptr && tail == nullptr)
    {
        return true;
    } else {
        return false;
    }
}
void enqueuelast(int n){
    Node* temp = new Node();
    temp->data = n;
    temp->next = nullptr;
    if (isEmpty())
    {
        head = temp;
        tail = temp;
    } else {
        previous = tail;
        tail->next = temp;
        tail = temp;
    }
}
void dequeuefront(){
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

void enqueuefront(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = nullptr;
    if (isEmpty())
    {
        head = temp;
        tail = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}
void dequeuelast(){
    Node* temp = tail;
    if (isEmpty())
    {
        cout<<"Queue is empty."<<endl;
    } else if (head == tail)
    {
        head = nullptr;
        tail = nullptr;
        delete temp;
    }else{
        previous->next = nullptr;
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
    enqueuelast(1);
    enqueuelast(2);
    enqueuelast(3);
    enqueuelast(4);
    print();
    dequeuefront();
    print();
    cout<<"The first element is: "<<front()<<endl;
    enqueuefront(5);
    print();
    dequeuelast();
    print();
    return 0;
}