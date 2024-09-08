// // By iterative approach
// #include<iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;
// };

// Node* head= nullptr;    
// Node* insert(Node* head, int n){
//     Node* temp = new Node();
//     temp->data = n;
//     temp->next = nullptr;
//     Node* newnode = head;
//     if (n==1)
//     {
//         head = temp;
//     } else{
    
//     while (newnode->next != nullptr)
//     {
//         newnode = newnode->next;
//     }
//     newnode->next = temp;
//     }
//     return head;
// }

// Node* reverse(Node* head){
//     Node* temp, *prev, *next; 
//     temp = head;
//     prev = nullptr;
//     while (temp != nullptr)
//     {
//         next = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = next;
//     }
//     head = prev;
//     return head;
    
// }
// void print(Node* head){
//     Node* temp = head;
//     while (temp != nullptr)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// // Print linked list by recursion
// // void print(Node *head){
// //     if (head == nullptr)
// //     {
// //         return;
// //     }
// //     cout<<head->data<<" ";
// //     print(head->next);
// // }
// // Print linked list by reverse recursion
// // void print(Node *head){
// //     if (head == nullptr)
// //     {
// //         return;
// //     }
// //     print(head->next); // ye phele saare address per jae ga jb usse null milega phr ye print krana start krega, first jb isse null milega tu ye null per hoga tu uska data print kradega then usse stack se remove krega or niche aaega then uska data print krega phr usse bhi stack se remove krdega and so on..
// //     cout<<head->data<<" ";
// // }
// int main() {
//     head = nullptr;
//     head = insert(head, 1);
//     head = insert(head, 2);
//     head = insert(head, 3);
//     head = insert(head, 4);
//     print(head);
//     cout<<endl;
//     head = reverse(head);
//     print(head);
//     return 0;
// }


// By Recursion

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head= nullptr;    
Node* insert(Node* head, int n){
    Node* temp = new Node();
    temp->data = n;
    temp->next = nullptr;
    Node* newnode = head;
    if (n==1)
    {
        head = temp;
    } else{
    
    while (newnode->next != nullptr)
    {
        newnode = newnode->next;
    }
    newnode->next = temp;
    }
    return head;
}

Node* reverse(Node* p){
    if (p->next == nullptr)
    {
        head = p;
        return head;
    } 
    reverse(p->next);
    p->next->next = p;
    p->next = nullptr;
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

int main() {
    head = nullptr;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    print(head);
    cout<<endl;
    head = reverse(head);
    print(head);
    return 0;
}