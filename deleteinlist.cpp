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
// With Node Number
// void deleted(int n){
//     Node* temp1 = head;
//     if (n==1)
//     {
//         head = temp1->next;
//         delete temp1;
//     } else {
    
//     for (int i = 1; i < n-1; i++)
//     {
//         temp1 = temp1->next;
//     }
//     Node* temp2 = temp1->next;  
//     temp1->next = temp2->next;
//     delete temp2; 
//     }
// }

// With Value
void deleted(int n){
    Node* temp = head;
    int lenght = 0;
    while (temp->next != nullptr)
    {
        if (temp->data != n)
        {
            lenght++;
            temp = temp->next;
        } else{
            break;
        }
    }
    cout<<lenght<<endl;
    Node* temp1 = head;
    if (lenght==0)
    {
        head = temp1->next;
        delete temp1;
    } else {
    
    for (int i = 1; i < lenght; i++)
    {
        temp1=temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
    }
}


// Node* deleteatend(){
//     Node* temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     delete temp->next;
//     return head;
// }

void deleteatbegin(){
    if (head==nullptr)
    {
        return;
    } 
    Node* temp = head;
    head = temp->next;
    delete temp;
}
int main() {
    head = nullptr;
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    print(head);
    // cout<<"After delete: "<<endl;
    // deleted(4);
    deleteatbegin();
    print(head);
    return 0;
}


