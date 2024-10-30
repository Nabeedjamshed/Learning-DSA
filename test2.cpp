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
#include<iostream>
using namespace std;

class Node{
    private:    
        int data;
        Node* next;
        Node* head;
        Node* tail;
    public:
        Node(){
            head = nullptr;
            tail = nullptr;
        }
        bool isEmpty(){
            if (head == nullptr && tail == nullptr)
            {
                return true;
            } else {
                return false;
            }
            
        }
        void enqueue(int x){
            Node* temp = new Node();
            temp->data = x;
            temp->next = nullptr;
            if (isEmpty())
            {
                head = tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
                // tail->next = head;
            } 
        }
        void enqueueatfront(int x){
            Node* temp = new Node();
            temp->data = x;
            temp->next = nullptr;
            if (isEmpty())
            {
                head = tail = temp;
            } else {
                Node* temp1 = head;
                temp->next = temp1;
                head = temp;
            }
        }
        void dequeueatlast(){
            if (isEmpty())
            {
                cout<<"Queue is already empty"<<endl;
            } else if (head == tail)
            {
                Node* temp = head;
                head = tail = nullptr;
                delete temp;
            } else {
                delete tail;
            }
        }
        void dequeue(){
            if (isEmpty())
            {
                cout<<"Queue is already empty"<<endl;
            } else if (head == tail)
            {
                Node* temp = head;
                head = tail = nullptr;
                delete temp;
            }
            
            else {
                Node* temp = head;
                head = temp->next;
                // tail->next = head;
                delete temp;
            }
        }

        int front(){
            if (isEmpty())
            {
                cout<<"Queue is already empty"<<endl;
            } else {
                return head->data;
            }
        }
        int rear(){
            if (isEmpty())
            {
                cout<<"Queue is already empty"<<endl;
            } else {
                return tail->data;
            }
        }
        void display(){
            if(isEmpty()){
                cout<<"Stack is already empty"<<endl;
            }
            else {
                Node* temp = head;
                while (temp != nullptr)
                {
                    cout<<temp->data<<" ";
                    temp = temp->next;
                }
                cout<<endl;
            }
        }
};
int main() {
    Node n;
    n.enqueue(1);
    n.enqueue(2);
    n.enqueue(3);
    n.enqueue(4);
    n.display();
    cout<<"Top element is: "<<n.front()<<endl;
    cout<<"Rear element is: "<<n.rear()<<endl;
    n.dequeue();
    n.display();
    n.enqueue(5);
    n.display();
    n.enqueueatfront(1);
    n.display();
    n.dequeueatlast();
    n.display();
    return 0;
}