// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// Node* head = nullptr;
// Node* tail = nullptr;

// bool isEmpty(){
//     if (head == nullptr && tail == nullptr)
//     {
//         return true;
//     } else {
//         return false;
//     }
// }
// void enqueue(int n){
//     Node* temp = new Node();
//     temp->data = n;
//     temp->next = nullptr;
//     if (isEmpty())
//     {
//         head = temp;
//         tail = temp;
//     } 
//     else {
//         tail->next = temp;
//         tail = temp;
//         tail->next = head;    
//         }
// }
// void dequeue(){
//     Node* temp = head;
//     if (isEmpty())
//     {
//         cout<<"Queue is empty."<<endl;
//     } else if (head == tail)
//     {
//         head = nullptr;
//         tail = nullptr;
//         delete temp;
//     } else {
//     head = temp->next;
//     tail->next = head;
//     delete temp;
//     }
// }
// int front(){
//     if (isEmpty())
//     {
//         cout<<"Queue is empty."<<endl;
//     } else {
//         return head->data;
//     }
// }

// void print(){
//     Node* temp=head;
//     do
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     } while (temp != head);

//     cout<<endl;
// }
// int main() {
//     head = nullptr;
//     enqueue(1);
//     enqueue(2);
//     enqueue(3);
//     enqueue(4);
//     print();
//     dequeue();
//     print();
//     cout<<"The first element is: "<<front();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// private:
//     int data;
//     Node *next;
//     Node *head;

// public:
//     Node()
//     {
//         head = nullptr;
//     }

//     void push(int x)
//     {
//         Node *temp = new Node();
//         temp->data = x;
//         temp->next = nullptr;
//         if (head == nullptr)
//         {
//             head = temp;
//         }
//         else
//         {
//             temp->next = head;
//             head = temp;
//         }
//     }
//     void pop()
//     {
//         Node *temp = head;
//         if (temp == nullptr)
//         {
//             cout << "Stack is empty. " << endl;
//         }
//         else
//         {
//             head = temp->next;
//             delete temp;
//         }
//     }
//     void top()
//     {
//         Node *temp = head;
//         if (temp == nullptr)
//         {
//             cout << "Stack is empty. " << endl;
//         }
//         else
//         {
//             cout << temp->data << " ";
//         }
//     }
//     bool isEmpty()
//     {
//         if (head == nullptr)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void print()
//     {
//         Node *temp = head;
//         while (temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
//     int getMin()
//     {
//         Node *temp = head;
//         int min = temp->data;
//         if (head == nullptr)
//         {
//             cout << "Stack is empty." << endl;
//         }

//         while (temp->next != nullptr)
//         {
//             temp = temp->next;
//             if (temp->data < min)
//             {
//                 min = temp->data;
//             }
//         }
//         return min;
//     }
// };

// int main()
// {
//     Node n, n1;
//     bool c1 = n1.isEmpty();
//     n1.isEmpty();
//     if (c1 == true)
//     {
//         cout << "Stack is empty." << endl;
//     }
//     else
//     {
//         cout << "Stack contains an elements." << endl;
//     }
//     n.push(3);
//     n.push(2);
//     n.push(1);
//     n.print();
//     // n.pop();
//     // n.print();
//     n.top();
//     cout << endl;
//     bool c = n.isEmpty();
//     if (c == true)
//     {
//         cout << "Stack is empty." << endl;
//     }
//     else
//     {
//         cout << "Stack contains an elements." << endl;
//     }
//     int a = n.getMin();
//     cout << "The minimum number is: " << a << endl;
//     return 0;
// }
