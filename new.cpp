// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// int main() {
//     vector <int> l;
//     Node* headaddress = NULL;

//     Node* temp = new Node();
//     temp->data = 2;
//     temp->next = NULL;
//     headaddress = temp;

//     Node *temp1 = new Node();
//     temp1->data = 3;
//     temp1->next = NULL;
    
//     Node *newnode = headaddress;
//     while(newnode->next != NULL)
//     {
//         newnode = newnode->next;
//     }
//     newnode->next = temp1;

//     temp1 = headaddress;
//     while (temp1 != NULL)
//     {
//         cout<<temp1->data<<" ";
//         l.push_back(temp1->data);
//         temp1 = temp1->next;
//     }
//     cout<<endl;
//     reverse(l.begin(), l.end());
//     for(auto &a:l){
//         cout<<a<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main() {
    Node* head = NULL;

    Node *temp = new Node();  
    temp->data = 1;
    temp->next = NULL;
    head = temp;

    temp = new Node();
    temp->data = 2;
    temp->next = NULL;

    Node* temp1 = head;

    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next=temp;

    while(temp1 != NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }  
    return 0;
}