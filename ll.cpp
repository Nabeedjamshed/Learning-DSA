#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

// Function to insert a node at the end of the list
Node* insert(Node* head, int x){
    Node *temp1 = new Node();
    temp1->data = x;
    temp1->next = nullptr;
    if (head == nullptr) {
        head = temp1;
    } else {
        Node *newnode = head;
        while (newnode->next != nullptr) {
            newnode = newnode->next;
        }
        newnode->next = temp1;
    }
    return head;
}

// Function to print the linked list
void print(Node* head){
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete the node at position 'n'
Node* deleted(Node* head, int n){
    Node* temp1 = head;
    if (n == 1) {
        head = temp1->next;
        delete temp1;
        return head;
    } else {
        for (int i = 1; i < n - 1; i++) {
            temp1 = temp1->next;
        }
        Node* temp2 = temp1->next;  
        temp1->next = temp2->next;
        delete temp2;
    }
    return head;
}

// Function to delete the middle node
Node* deleteMiddle(Node* head) {
    if (head == nullptr || head->next == nullptr) return head;  // No deletion if list is empty or has only one element

    Node* temp = head;
    int count = 0;

    // Count the number of nodes
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    if (count % 2 == 0)
    {
        int middleIndex = (count / 2);
        head = deleted(head, (middleIndex+1));
    } else {
        int middleIndex = (count /2 + 1);
        head = deleted(head, (middleIndex));    
    }
    return head;
}

int main() {
    head = nullptr;

    // Test case: Insert nodes into the list
    head = insert(head, 1);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 7);
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 6);

    print(head);  

    head = deleteMiddle(head);  
    print(head);

    return 0;
}
