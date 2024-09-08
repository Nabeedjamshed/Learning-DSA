// // Reversal of string
// #include<iostream>
// #include<cstring>
// #include<stack>
// using namespace std;

// void reverse(char arr[], int size){
//     stack <char> S;
//     for (int i = 0; i < size; i++)
//     {
//         S.push(arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = S.top();
//         S.pop();
//     }
// }


// // Efficient way to reverse the string;
// // void reverse(char arr[], int size){
// //     int i = 0;
// //     int j = size-1;
// //     while (i<j)
// //     {
// //         char temp = arr[i];
// //         arr[i] = arr[j];
// //         arr[j] = temp;
// //         i++;
// //         j--;
// //     }  
// // }


// int main() {
//     char c[50];    
//     cout << "Enter a phrase: ";
//     cin.getline(c, 51); 
//     reverse(c, strlen(c));
//     cout << "Output: " << c << endl;
//     return 0;
// }



// Reversal of Linked list by stack
#include<iostream>
#include<stack>
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
Node* reverse(Node* head){
    Node* temp = head;
    if (temp==nullptr)
    {
        return head;
    }
    
    stack <Node*>s;
    while (temp!=nullptr)
    {
        s.push(temp);
        temp=temp->next;
    }
    temp = s.top();
    head = temp;
    s.pop();    
    while (!s.empty())
    {
       temp->next = s.top();
       s.pop();
       temp = temp->next;
    } 
    temp->next = nullptr;
    return head;
}
int main() {
    head = nullptr;
    head = insert(head,1);
    head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);
    print(head);
    head = reverse(head);
    print(head);
    return 0;
}