// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* link;
// };

// int main() {
//     Node* A = nullptr; // Start with an empty list

//     // Insert first node
//     Node* temp1 = new Node();
//     temp1->data = 2;
//     temp1->link = nullptr;
//     A = temp1;

//     // Insert second node
//     Node* newNode = new Node();
//     newNode->data = 4;
//     newNode->link = nullptr;

//     // Traverse the list to find the last node
//     Node* temp1 = A;
//     while (temp1->link != nullptr) {
//         temp1 = temp1->link;
//     }
//     temp1->link = newNode;

//     // Insert third node
//     Node* thirdNode = new Node();
//     thirdNode->data = 6;
//     thirdNode->link = nullptr;

//     // Traverse the list again to find the last node
//     temp1 = A;
//     while (temp1->link != nullptr) {
//         temp1 = temp1->link;
//     }
//     temp1->link = thirdNode;

//     // Print the list
//     temp1 = A;
//     while (temp1 != nullptr) {
//         cout << temp1->data << " ";
//         temp1 = temp1->link;
//     }

//     // Cleanup dynamically allocated memory
//     Node* current = A;
//     while (current != nullptr) {
//         Node* next = current->link;
//         delete current;
//         current = next;
//     }

//     return 0;
// }


// // Insert Node at the beginning and the end
// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// Node* head;

// void insertatbegin(int x){
//     Node *temp1 = new Node();
//     temp1->data = x;
//     temp1->next = head;
//     head = temp1;
// }

// void insertatend(int x){
//     Node *temp1 = new Node();
//     temp1->data = x;
//     temp1->next = nullptr;
//     Node *newnode = head;
//     while(newnode->next != nullptr){
//         newnode = newnode->next;
//     }
//     newnode->next = temp1;
// }

// void print(){
//     Node *temp1 = head;
//     cout<<"List is: ";
//     while(temp1 != nullptr){
//         cout<<temp1->data<<" ";
//         temp1 = temp1->next;
//     }
//     cout<<endl;
// }
// int main() {
//     int n, num;
//     cout<<"How many number do you want to insert at the beginning?: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter a number: ";
//         cin>>num;
//         insertatbegin(num);
//     }
//     int n1, num1;
//     cout<<"How many number do you want to insert at the end?: ";
//     cin>>n1;
//     for (int i = 0; i < n1; i++)
//     {
//         cout<<"Enter a number: ";
//         cin>>num1;
//         insertatend(num1);
//     }
//     cout<<endl;
//     print();
//     return 0;
// }



// // Insert node at nth position
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;
// void insertatnth(int x, int n){
//     Node *temp1 = new Node();
//     temp1->data = x;
//     temp1->next = nullptr;
//     if(n==1){
//         temp1->next = head;
//         head = temp1;
//         return;
//     }
//     Node *temp2 = head;
//     for (int i = 1; i < n-1; i++)
//     {
//         temp2 = temp2->next;
//     }
//     temp1->next = temp2->next;
//     temp2->next = temp1; 
// }

void insertatnth(int dta, int position){
    Node* temp = new Node();
    temp->data = dta;
    temp->next = nullptr;
    if (head == nullptr)
    {
        head = temp;
        return;
    }
    Node* newnode = head;
    for (int i = 1; i < position-1; i++)
    {
        newnode = newnode->next;
    }
    temp->next = newnode->next;
    newnode->next = temp;
    
}
void print(){
    Node* temp1 = head;
    while(temp1 != nullptr){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
}
int main() {
    head = nullptr;
    insertatnth(2,1);
    insertatnth(4,2);
    insertatnth(6,3);
    insertatnth(8,4);
    print();
    return 0;
}



// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// Node* head;

// int getlength(){
//     Node* temp = head;
//     int lenght = 0;
//     while (temp != nullptr)
//     {
//         lenght++;
//         temp = temp->next;
//     }
//     return lenght;
// }
// void insertatnth(int x, int n){
//     int lenght = getlength();
//     if (n<1 || n>lenght+1)
//     {
//         cout<<"Invalid index"<<endl;
//     }
//     else{
//     Node *temp1 = new Node();
//     temp1->data = x;
//     temp1->next = nullptr;
//     if(n==1){
//         temp1->next = head;
//         head = temp1;
//         return;
//     }
//     Node *temp2 = head;
//     for (int i = 1; i < n-1; i++)
//     {
//         temp2 = temp2->next;
//     }
//     temp1->next = temp2->next;
//     temp2->next = temp1;
//     }
// }

// void print(){
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// int main() {
//     head = nullptr;
//     insertatnth(1,1);
//     insertatnth(2,2);
//     insertatnth(3,3);
//     insertatnth(4,5);
//     print();
//     return 0;
// }