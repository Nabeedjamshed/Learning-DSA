//Stack
// #include<iostream>
// using namespace std;

// class Node{
//     private:
//         int data;
//         Node* next;
//         Node* head;
//     public:
//         Node(){
//             head = nullptr;
//         }
//         bool isEmpty(){
//             if (head == nullptr)
//             {
//                 return true;
//             }
//             else {
//                 return false;
//             }
//         }
//         void push(int x){
//             Node* temp = new Node;
//             temp->data = x;
//             temp->next = nullptr;
//             if (isEmpty())
//             {
//                 head = temp;
//             } else {
//                 temp->next = head;
//                 head = temp;
//             }
//         }

//         void pop(){
//             if (isEmpty())
//             {
//                 cout<<"Stack is already empty"<<endl;
//             } else {
//                 Node* temp = head;
//                 head = temp->next;
//                 delete temp;
//             }
//         }

//         int peek(){
//             if (isEmpty())
//             {
//                 cout<<"Stack is already empty"<<endl;
//             } else {
//                 Node* temp = head;
//             return temp->data;
//             }
//         }

//         void display(){
//             if(isEmpty()){
//                 cout<<"Stack is already empty"<<endl;
//             }
//             else {
//                 Node* temp = head;
//                 while (temp != nullptr)
//                 {
//                     cout<<temp->data<<" ";
//                     temp = temp->next;
//                 }
//             }
//         }
// };
// int main() {
//     Node n;
//     n.push(1);
//     n.push(2);
//     n.push(3);
//     n.push(4);
//     n.display();
//     cout<<"Top element is "<<n.peek()<<endl;
//     n.pop();
//     n.display();
//     return 0;
// }

//Queue
// #include<iostream>
// using namespace std;

// class Node{
//     private:    
//         int data;
//         Node* next;
//         Node* head;
//         Node* tail;
//     public:
//         Node(){
//             head = nullptr;
//             tail = nullptr;
//         }
//         bool isEmpty(){
//             if (head == nullptr && tail == nullptr)
//             {
//                 return true;
//             } else {
//                 return false;
//             }
            
//         }
//         void enqueue(int x){
//             Node* temp = new Node();
//             temp->data = x;
//             temp->next = nullptr;
//             if (isEmpty())
//             {
//                 head = tail = temp;
//             } else {
//                 tail->next = temp;
//                 tail = temp;
//                 // tail->next = head;
//             } 
//         }
//         void enqueueatfront(int x){
//             Node* temp = new Node();
//             temp->data = x;
//             temp->next = nullptr;
//             if (isEmpty())
//             {
//                 head = tail = temp;
//             } else {
//                 Node* temp1 = head;
//                 temp->next = temp1;
//                 head = temp;
//             }
//         }
//         void dequeue(){
//             if (isEmpty())
//             {
//                 cout<<"Queue is already empty"<<endl;
//             } else if (head == tail)
//             {
//                 Node* temp = head;
//                 head = tail = nullptr;
//                 delete temp;
//             }
            
//             else {
//                 Node* temp = head;
//                 head = temp->next;
//                 // tail->next = head;
//                 delete temp;
//             }
//         }

//         int front(){
//             if (isEmpty())
//             {
//                 cout<<"Queue is already empty"<<endl;
//             } else {
//                 return head->data;
//             }
//         }
//         int rear(){
//             if (isEmpty())
//             {
//                 cout<<"Queue is already empty"<<endl;
//             } else {
//                 return tail->data;
//             }
//         }
//         void display(){
//             if(isEmpty()){
//                 cout<<"Stack is already empty"<<endl;
//             }
//             else {
//                 Node* temp = head;
//                 while (temp != nullptr)
//                 {
//                     cout<<temp->data<<" ";
//                     temp = temp->next;
//                 }
//                 cout<<endl;
//             }
//         }
// };
// int main() {
//     Node n;
//     n.enqueue(1);
//     n.enqueue(2);
//     n.enqueue(3);
//     n.enqueue(4);
//     n.display();
//     cout<<"Top element is: "<<n.front()<<endl;
//     cout<<"Rear element is: "<<n.rear()<<endl;
//     n.dequeue();
//     n.display();
//     n.enqueue(5);
//     n.display();
//     n.enqueueatfront(1);
//     n.display();
//     n.dequeueatlast();
//     n.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Queue{
//     private:
//         int max_size = 100;
//         int queue[100];
//         int front = -1;
//         int rear = -1;
//         int count = 0;
//     public:
//         bool isEmpty(){
//             return (front == -1 && rear == -1);
//         }

//         bool isFull(){
//             return (count == max_size);
//         }

//         void enqueue(int x){
//             if (isFull())
//             {
//                 cout<<"Queue is fulled"<<endl;
//             } else if (isEmpty())
//             {
//                 front = rear = 0;
//                 queue[rear] = x; 
//             } else {
//                 count++;
//                 rear++;
//                 // rear = (rear + 1) % max_size;
//                 queue[rear] = x;
//             } 
//         }
//         void enqueuefront(int x){
//             if (isFull())
//             {
//                 cout<<"Queue is fulled"<<endl;
//             } else if (isEmpty())
//             {
//                 front = rear = 0;
//                 queue[front] = x; 
//                 count++;
//             } else {
//                 front = (front-1+max_size) % max_size;
//                 queue[front] = x;
//                 count++;
//             }
//         }
//         void dequeue(){
//             if (isEmpty())
//             {
//                 cout<<"Queue is already empty"<<endl;
//             } else if (front == rear)
//             {
//                 front = rear = -1;
//                 count--;
//             }
//             else {
//                 front++;
//                 count--;
//             }   
//         }

//         void dequeuelast(){
//             if (isEmpty())
//             {
//                 cout<<"Queue is already empty"<<endl;
//             } else if (front == rear)
//             {
//                 front = rear = -1;
//                 count--;
//             } else {
//                 rear = (rear-1+max_size)%max_size;
//                 count--;
//             }
//         }
//         int peek(){
//             return queue[front];
//         }

//         void display(){
//             for (int i = front; i <= rear; i++)
//             {
//                 cout<<queue[i]<<" ";
//             }
//             cout<<endl;
//         }
//     };
// int main() {
//     Queue q;
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     q.enqueue(4);
//     q.display();
//     cout<<"Top element is: "<<q.peek()<<endl;
//     q.dequeue();
//     q.display();
//     return 0;
// }

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;

void insert(int element, int pos) {
    Node* temp = new Node();
    temp->data = element;
    temp->next = nullptr;

    if (pos < 1) {
        cout << "Invalid position" << endl;
        delete temp;  // Free the allocated memory
        return;
    }

    // Insertion at the beginning
    if (pos == 1) {
        temp->next = head;
        head = temp;
        return;  // Exit after inserting
    }

    Node* current = head;
    int currentpos = 1;  // Position starts from 1

    // Traverse the list to find the insertion point
    while (current != nullptr && currentpos < pos - 1) {
        current = current->next;
        currentpos++;
    }

    // If current is null, pos is greater than the list length
    if (current == nullptr) {
        cout << "Position exceeds the length of the list" << endl;
        delete temp;  // Free the allocated memory
        return;
    }

    // Insert the new node at the desired position
    temp->next = current->next;
    current->next = temp;
}
void deleted(int pos) {

    if (pos < 1) {
        cout << "Invalid position" << endl;
        return;
    }

    // Insertion at the beginning
    if (pos == 1) {
        Node* temp = head;
        head = temp->next;
        delete temp;
        return;  // Exit after inserting
    }

    Node* current = head;
    int currentpos = 1;  // Position starts from 1

    // Traverse the list to find the insertion point
    while (current != nullptr && currentpos < pos - 1) {
        current = current->next;
        currentpos++;
    }

    // If current is null, pos is greater than the list length
    if (current == nullptr) {
        cout << "Position exceeds the length of the list" << endl; 
        return;
    }

    // Insert the new node at the desired position
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}


void print(){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    insert(1, 1);
    insert(2, 2);
    insert(3, 3);
    insert(4, 4);
    insert(5, 1);
    // insert(5, 7);
    print();
    deleted(2);
    print();
    return 0;
}