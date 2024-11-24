#include <iostream>
using namespace std;

class NabeedAli_Lab08 {
private:
    struct NabeedAli_Lab08 {
        int data;
        NabeedAli_Lab08* next;
    };
    NabeedAli_Lab08* head = nullptr;
    NabeedAli_Lab08* tail = nullptr;

public:
    bool isEmpty() {
        return head == nullptr && tail == nullptr;
    }

    void enqueue(int n) {
        NabeedAli_Lab08* temp = new NabeedAli_Lab08();
        temp->data = n;
        temp->next = nullptr;
        if (isEmpty()) {
            head = temp;
            tail = temp;
            tail->next = head;
        } else {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        NabeedAli_Lab08* temp = head;
        if (head == tail) {
            head = nullptr;
            tail = nullptr;
        } else {
            head = temp->next;
            tail->next = head;
        }
        delete temp;
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        } else {
            return head->data;
        }
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        NabeedAli_Lab08* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    NabeedAli_Lab08 q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.print();
    q.dequeue();
    q.print();
    cout << "The first element is: " << q.front() << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// class NabeedAli_Lab08
// {
// private:
//     int data;
//     NabeedAli_Lab08 *next;
//     NabeedAli_Lab08 *head;

// public:
//     NabeedAli_Lab08()
//     {
//         head = nullptr;
//     }

//     void push(int x)
//     {
//         NabeedAli_Lab08 *temp = new NabeedAli_Lab08();
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
//         NabeedAli_Lab08 *temp = head;
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
//         NabeedAli_Lab08 *temp = head;
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
//         NabeedAli_Lab08 *temp = head;
//         while (temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

// };

// int main()
// {
//     NabeedAli_Lab08 n, n1;
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
//     n.pop();
//     n.print();
//     cout<<"Top element in Stack is: ";
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
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class NabeedAli_Lab08{
//     private:
//         int data;
//         NabeedAli_Lab08* next;
//         NabeedAli_Lab08* head; 
//     public:
//         NabeedAli_Lab08(){
//             head = nullptr;
//         }
//         void insert(int element, int pos) {
//             NabeedAli_Lab08* temp = new NabeedAli_Lab08();
//             temp->data = element;
//             temp->next = nullptr;

//             if (pos < 1) {
//                 cout << "Invalid position" << endl;
//                 delete temp;  
//                 return;
//             }

//             if (pos == 1) {
//                 temp->next = head;
//                 head = temp;
//                 return;  
//             }

//             NabeedAli_Lab08* current = head;
//             int currentpos = 1;  

//             while (current != nullptr && currentpos < pos - 1) {
//                 current = current->next;
//                 currentpos++;
//             }

//             if (current == nullptr) {
//                 cout << "Position exceeds the length of the list1" << endl;
//                 delete temp;  
//                 return;
//             }

//             temp->next = current->next;
//             current->next = temp;
//         }

//         void removeduplicates(){
//             NabeedAli_Lab08* current = head;
//             while (current != nullptr && current->next != nullptr)
//             {
//                 if (current->data == current->next->data)
//                 {
//                     NabeedAli_Lab08* temp = current->next;
//                     current->next = temp->next;
//                     delete temp;
//                 } else {
//                     cout<<current->data<<" ";
//                     current = current->next;
//                 }
//             }
//             cout<<current->data<<" ";
            
//         }
//         void display(){
//             NabeedAli_Lab08* temp = head;
//             while (temp != nullptr)
//             {
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }
// };
// int main() {
//     NabeedAli_Lab08 n;
//     n.insert(1,1);
//     n.insert(1,2);
//     n.insert(2,3);
//     n.insert(3,4);
//     n.insert(3,5);
//     cout<<"Input List: ";
//     n.display();
//     cout<<"Output List: ";
//     n.removeduplicates();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class NabeedAli_Lab08 {
// public:
//     int data;
//     NabeedAli_Lab08* next;
//     NabeedAli_Lab08(int value) : data(value), next(nullptr) {}
// };

// class LinkedList {
// public:
//     NabeedAli_Lab08* head;
//     LinkedList() : head(nullptr) {}

//     NabeedAli_Lab08* insert(int element, int pos) {
//         NabeedAli_Lab08* temp = new NabeedAli_Lab08(element);
        
//         if (pos < 1) {
//             cout << "Invalid position" << endl;
//             delete temp;
//             return head;
//         }

//         if (pos == 1) {
//             temp->next = head;
//             head = temp;
//             return head;
//         }

//         NabeedAli_Lab08* current = head;
//         int currentPos = 1;

//         while (current != nullptr && currentPos < pos - 1) {
//             current = current->next;
//             currentPos++;
//         }

//         if (current == nullptr) {
//             cout << "Position exceeds the length of the list1" << endl;
//             delete temp;
//             return head;
//         }

//         temp->next = current->next;
//         current->next = temp;
//         return head;
//     }

//     NabeedAli_Lab08* reverse(NabeedAli_Lab08* head) {
//         NabeedAli_Lab08* prev = nullptr;
//         NabeedAli_Lab08* temp = head;
//         NabeedAli_Lab08* next = nullptr;

//         while (temp != nullptr) {
//             next = temp->next;
//             temp->next = prev;
//             prev = temp;
//             temp = next;
//         }
//         return prev;
//     }

//     bool checkPalindrome(NabeedAli_Lab08* head, NabeedAli_Lab08* reversedHead) {
//         NabeedAli_Lab08* temp1 = head;
//         NabeedAli_Lab08* temp2 = reversedHead;

//         while (temp1 != nullptr && temp2 != nullptr) {
//             if (temp1->data != temp2->data) {
//                 return false;
//             }
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }

//         return (temp1 == nullptr && temp2 == nullptr);
//     }

//     NabeedAli_Lab08* copyList(NabeedAli_Lab08* head) {
//         if (head == nullptr) return nullptr;

//         NabeedAli_Lab08* newHead = new NabeedAli_Lab08(head->data);
//         NabeedAli_Lab08* temp = head->next;
//         NabeedAli_Lab08* newTemp = newHead;

//         while (temp != nullptr) {
//             newTemp->next = new NabeedAli_Lab08(temp->data);
//             newTemp = newTemp->next;
//             temp = temp->next;
//         }
//         return newHead;
//     }

//     void display(NabeedAli_Lab08* head) {
//         NabeedAli_Lab08* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedList list1;
    
//     list1.head = list1.insert(1, 1);
//     list1.head = list1.insert(2, 2);
//     list1.head = list1.insert(2, 3);
//     list1.head = list1.insert(1, 4);
//     // list1.head = list1.insert(9, 5);

//     NabeedAli_Lab08* reversedHead = list1.copyList(list1.head);
//     reversedHead = list1.reverse(reversedHead);

//     bool isPalindrome = list1.checkPalindrome(list1.head, reversedHead);
//     list1.display(list1.head);
//     if (isPalindrome) {
//         cout << "Given Linked List is a Palindrome" << endl;
//     } else {
//         cout << "Given Linked List is not a Palindrome" << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class NabeedAli_Lab08 {
// public:
//     int data;
//     NabeedAli_Lab08* next;
//     NabeedAli_Lab08(int value) : data(value), next(nullptr) {}
// };

// class LinkedList {
// public:
//     NabeedAli_Lab08* head;
//     LinkedList() : head(nullptr) {}

//     NabeedAli_Lab08* insert(int element, int pos) {
//         NabeedAli_Lab08* temp = new NabeedAli_Lab08(element);
        
//         if (pos < 1) {
//             cout << "Invalid position" << endl;
//             delete temp;
//             return head;
//         }

//         if (pos == 1) {
//             temp->next = head;
//             head = temp;
//             return head;
//         }

//         NabeedAli_Lab08* current = head;
//         int currentPos = 1;

//         while (current != nullptr && currentPos < pos - 1) {
//             current = current->next;
//             currentPos++;
//         }

//         if (current == nullptr) {
//             cout << "Position exceeds the length of the list" << endl;
//             delete temp;
//             return head;
//         }

//         temp->next = current->next;
//         current->next = temp;
//         return head;
//     }

//     NabeedAli_Lab08* mergeLists(NabeedAli_Lab08* list1, NabeedAli_Lab08* list2) {
//         if (list1 == nullptr) return list2;
//         if (list2 == nullptr) return list1;

//         NabeedAli_Lab08* mergedHead = nullptr;

//         if (list1->data < list2->data) {
//             mergedHead = list1;
//             mergedHead->next = mergeLists(list1->next, list2);
//         } else {
//             mergedHead = list2;
//             mergedHead->next = mergeLists(list1, list2->next);
//         }
//         return mergedHead;
//     }

//     void display(NabeedAli_Lab08* head) {
//         NabeedAli_Lab08* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedList list1;
//     LinkedList list2;
    
//     list1.head = list1.insert(1, 1);
//     list1.head = list1.insert(2, 2);
//     list1.head = list1.insert(4, 3);
//     cout<<"List 1: ";
//     list1.display(list1.head);

//     list2.head = list2.insert(1, 1);
//     list2.head = list2.insert(3, 2);
//     list2.head = list2.insert(4, 3);
//     cout<<"List 2: ";
//     list1.display(list2.head);

//     LinkedList mergedList;
//     mergedList.head = mergedList.mergeLists(list1.head, list2.head);
//     cout << "Merged List: ";
//     mergedList.display(mergedList.head);

//     return 0;
// }

