// // #include <iostream>
// // using namespace std;

// // class Node {
// // public:
// //     int data;
// //     Node* next;
// //     Node(int value) : data(value), next(nullptr) {}
// // };

// // class LinkedList {
// // public:
// //     Node* head;
// //     LinkedList() : head(nullptr) {}

// //     Node* insert(int element, int pos) {
// //         Node* temp = new Node(element);
        
// //         if (pos < 1) {
// //             cout << "Invalid position" << endl;
// //             delete temp;
// //             return head;
// //         }

// //         if (pos == 1) {
// //             temp->next = head;
// //             head = temp;
// //             return head;
// //         }

// //         Node* current = head;
// //         int currentPos = 1;

// //         while (current != nullptr && currentPos < pos - 1) {
// //             current = current->next;
// //             currentPos++;
// //         }

// //         if (current == nullptr) {
// //             cout << "Position exceeds the length of the list" << endl;
// //             delete temp;
// //             return head;
// //         }

// //         temp->next = current->next;
// //         current->next = temp;
// //         return head;
// //     }

// //     Node* reverse(Node* head) {
// //         Node* prev = nullptr;
// //         Node* temp = head;
// //         Node* next = nullptr;

// //         while (temp != nullptr) {
// //             next = temp->next;
// //             temp->next = prev;
// //             prev = temp;
// //             temp = next;
// //         }
// //         return prev;
// //     }

// //     bool checkPalindrome(Node* head, Node* reversedHead) {
// //         Node* temp1 = head;
// //         Node* temp2 = reversedHead;

// //         while (temp1 != nullptr && temp2 != nullptr) {
// //             if (temp1->data != temp2->data) {
// //                 return false;
// //             }
// //             temp1 = temp1->next;
// //             temp2 = temp2->next;
// //         }

// //         return (temp1 == nullptr && temp2 == nullptr);
// //     }

// //     Node* copyList(Node* head) {
// //         if (head == nullptr) return nullptr;

// //         Node* newHead = new Node(head->data);
// //         Node* temp = head->next;
// //         Node* newTemp = newHead;

// //         while (temp != nullptr) {
// //             newTemp->next = new Node(temp->data);
// //             newTemp = newTemp->next;
// //             temp = temp->next;
// //         }
// //         return newHead;
// //     }

// //     void display(Node* head) {
// //         Node* temp = head;
// //         while (temp != nullptr) {
// //             cout << temp->data << " ";
// //             temp = temp->next;
// //         }
// //         cout << endl;
// //     }
// // };

// // int main() {
// //     LinkedList list;
    
// //     list.head = list.insert(1, 1);
// //     list.head = list.insert(2, 2);
// //     list.head = list.insert(2, 3);
// //     list.head = list.insert(1, 4);
// //     list.head = list.insert(9, 5);

// //     Node* reversedHead = list.copyList(list.head);
// //     reversedHead = list.reverse(reversedHead);

// //     bool isPalindrome = list.checkPalindrome(list.head, reversedHead);
// //     if (isPalindrome) {
// //         cout << "Given Linked List is a Palindrome" << endl;
// //     } else {
// //         cout << "Given Linked List is not a Palindrome" << endl;
// //     }

// //     return 0;
// // }



//     // int getMin()
//     // {
//     //     Node *temp = head;
//     //     int min = temp->data;
//     //     if (head == nullptr)
//     //     {
//     //         cout << "Stack is empty." << endl;
//     //     }

//     //     while (temp->next != nullptr)
//     //     {
//     //         temp = temp->next;
//     //         if (temp->data < min)
//     //         {
//     //             min = temp->data;
//     //         }
//     //     }
//     //     return min;
//     // }



// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) : data(data), next(nullptr) {}
// };

// class LinkedList {
// public:
//     Node* head;

//     LinkedList() : head(nullptr) {}

//     Node* insert(int element, int pos) {
//         Node* newNode = new Node(element);

//         if (pos < 1) {
//             cout << "Invalid position" << endl;
//             delete newNode;
//             return head;
//         }

//         if (pos == 1) {
//             newNode->next = head;
//             head = newNode;
//             return head;
//         }

//         Node* current = head;
//         for (int currentPos = 1; currentPos < pos - 1 && current != nullptr; currentPos++) {
//             current = current->next;
//         }

//         if (current == nullptr) {
//             cout << "Position exceeds the length of the list" << endl;
//             delete newNode;
//             return head;
//         }

//         newNode->next = current->next;
//         current->next = newNode;
//         return head;
//     }

//     void display(Node* node) {
//         while (node != nullptr) {
//             cout << node->data << " ";
//             node = node->next;
//         }
//         cout << endl;
//     }

//     Node* partition(Node* start, Node* end) {
//         int pivotValue = end->data; // Choose the last element as pivot
//         Node* pIndex = start; // Pointer for the smaller element

//         for (Node* current = start; current != end; current = current->next) {
//             if (current->data < pivotValue) {
//                 swap(pIndex->data, current->data); // Swap if current node is smaller than pivot
//                 pIndex = pIndex->next; // Move to the next position
//             }
//         }
//         swap(pIndex->data, end->data); // Swap the pivot element with the element at pIndex
//         return pIndex; // Return the index of the pivot element
//     }

//     Node* quickSort(Node* start, Node* end) {
//         if (!start || start == end) return start; // Base case

//         Node* pivot = partition(start, end); // Partition the list

//         // Recursively sort the left and right parts
//         if (pivot && start != pivot) {
//             Node* temp = start;
//             while (temp->next != pivot) {
//                 temp = temp->next;
//             }
//             temp->next = nullptr; // Split the list
//             quickSort(start, temp); // Sort before pivot
//             temp->next = pivot; // Reconnect to pivot
//         }
//         if (pivot && pivot->next != end) {
//             quickSort(pivot->next, end); // Sort after pivot
//         }

//         return start; // Return the head of the sorted list
//     }

//     void sort() {
//         Node* tail = head;
//         while (tail && tail->next) {
//             tail = tail->next; // Find the last node
//         }
//         head = quickSort(head, tail); // Sort the list
//     }
// };

// int main() {
//     LinkedList list;
//     list.head = list.insert(4, 1);
//     list.head = list.insert(1, 2);
//     list.head = list.insert(5, 3);
//     list.head = list.insert(3, 4);
//     list.head = list.insert(2, 5); // Correct position for the last element

//     cout << "Original list: ";
//     list.display(list.head);

//     list.sort(); // Call sort function to sort the list

//     cout << "Sorted list: ";
//     list.display(list.head);

//     return 0;
// }


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    Node* insert(int element, int pos) {
        Node* newNode = new Node(element);

        if (pos < 1) {
            cout << "Invalid position" << endl;
            delete newNode;
            return head;
        }

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return head;
        }

        Node* current = head;
        for (int currentPos = 1; currentPos < pos - 1 && current != nullptr; currentPos++) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Position exceeds the length of the list" << endl;
            delete newNode;
            return head;
        }

        newNode->next = current->next;
        current->next = newNode;
        return head;
    }

    void display(Node* node) {
        while (node != nullptr) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }

    Node* partition(Node* start, Node* end) {
        int pivotValue = end->data;
        Node* pIndex = start;

        for (Node* current = start; current != end; current = current->next) {
            if (current->data < pivotValue) {
                swap(pIndex->data, current->data);
                pIndex = pIndex->next;
            }
        }
        swap(pIndex->data, end->data);
        return pIndex;
    }

    Node* quickSort(Node* start, Node* end) {
        if (!start || start == end) return start;

        Node* pivot = partition(start, end);

        if (pivot && start != pivot) {
            Node* temp = start;
            while (temp->next != pivot) {
                temp = temp->next;
            }
            temp->next = nullptr;
            quickSort(start, temp);
            temp->next = pivot;
        }
        if (pivot && pivot->next != end) {
            quickSort(pivot->next, end);
        }

        return start;
    }

    void sort() {
        Node* tail = head;
        while (tail && tail->next) {
            tail = tail->next;
        }
        head = quickSort(head, tail);
    }
};

int main() {
    LinkedList list;
    list.head = list.insert(4, 1);
    list.head = list.insert(1, 2);
    list.head = list.insert(5, 3);
    list.head = list.insert(3, 4);
    list.head = list.insert(2, 5);

    cout << "Original list: ";
    list.display(list.head);

    list.sort();

    cout << "Sorted list: ";
    list.display(list.head);

    return 0;
}

