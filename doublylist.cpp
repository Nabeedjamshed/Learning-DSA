// Insertion

// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
//     Node* prev;
// };
// Node* head = nullptr;
// // void insertathead(int x){
// //     Node* temp = new Node();
// //     temp->data = x;
// //     temp->next = nullptr;
// //     temp->prev = nullptr;
// //     if (head==nullptr)
// //     {
// //         head = temp;
// //     } else {
// //         head->prev = temp;
// //         temp->next = head;
// //         head = temp; 
// //     }  
// // }

// // void insertatend(int x){
// //     Node* temp = new Node();
// //     temp->data = x;
// //     temp->next = nullptr;
// //     temp->prev = nullptr;
// //     Node* newnode = head;
// //     if (head == nullptr)
// //     {
// //         head= temp;
// //         return;
// //     }
    
// //     while (newnode->next!=nullptr)
// //     {
// //         newnode = newnode->next;
// //     }
// //     newnode->next = temp;
// //     temp->prev = newnode;
   
// // }

// void insertatnth(int dta, int position){
//     Node* temp = new Node();
//     temp->data = dta;
//     temp->next = nullptr;
//     temp->prev = nullptr;
//     if (head == nullptr)
//     {
//         head = temp;
//         return;
//     }
//     Node* newnode = head;
//     for (int i = 1; i < position-1; i++)
//     {
//         newnode = newnode->next;
//     }
//     temp->next = newnode->next;
//     newnode->next = temp;
//     temp->prev = newnode;
//     newnode->next->prev = temp;
// }
// void print(){
//     Node* temp = head;
//     while(temp != nullptr){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     } 
//     cout<<endl;
// }
// int main() {
//     insertatnth(2,1);
//     insertatnth(4,2);
//     insertatnth(6,3);
//     insertatnth(8,4);
//     print();
//     return 0;
// }


// Deletion

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head = nullptr;
void insertatend(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = nullptr;
    temp->prev = nullptr;
    Node* newnode = head;
    if (head == nullptr)
    {
        head= temp;
        return;
    }
    
    while (newnode->next!=nullptr)
    {
        newnode = newnode->next;
    }
    newnode->next = temp;
    temp->prev = newnode;
}
void print(){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    } 
    cout<<endl;
}

// void deleteathead(){
//     if (head == nullptr)
//     {
//         return;
//     }
//     Node* temp = head;
//     head = head->next;
//     head->next->prev = head;
//     delete temp;
// }

// void deleteatend(){
//     if (head == nullptr)
//     {
//         return;
//     }
//     Node* temp = head;
//     while(temp->next != nullptr){
//         temp = temp->next;
//     }
//     temp->next = nullptr;

// }

void deleteatnth(int position){
    Node* temp = head;
    for (int i = 1; i < position-1; i++)
    {
        temp=temp->next;
    }
    Node* newnode = temp->prev;
    newnode->next = nullptr;
    delete temp;
}
int main() {
    insertatend(2);
    insertatend(4);
    insertatend(6);
    insertatend(8);
    print();
    // deleteathead();
    // deleteatend();
    deleteatnth(3);
    print();
    return 0;
}