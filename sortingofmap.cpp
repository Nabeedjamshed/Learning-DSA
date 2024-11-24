#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

struct Node {
    double data;
    Node* next;
};

Node* head = nullptr;

Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* list1, Node* list2) {
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    Node* mergedHead = nullptr;

    if (list1->data < list2->data) {
        mergedHead = list1;
        mergedHead->next = merge(list1->next, list2);
    } else {
        mergedHead = list2;
        mergedHead->next = merge(list1, list2->next);
    }
    return mergedHead;
}

Node* mergeSort(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* middle = findMiddle(head);
    Node* left = head;
    Node* right = middle->next;
    middle->next = nullptr;

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

Node* insert(Node* head, double x) {
    Node* temp1 = new Node();
    temp1->data = x;
    temp1->next = nullptr;
    if (head == nullptr) {
        head = temp1;
    } else {
        Node* newnode = head;
        while (newnode->next != nullptr) {
            newnode = newnode->next;
        }
        newnode->next = temp1;
    }
    return head;
}

map<double, string> receiver(unordered_map<double, string> hashmap) {
    for (auto& pair : hashmap) {
        head = insert(head, pair.first);
    }

    head = mergeSort(head);

    map<double, string> sorted_map;
    Node* current = head;
    while (current != nullptr) {
        sorted_map[current->data] = hashmap[current->data];
        current = current->next;
    }

    return sorted_map;
}

int main() {
    unordered_map<double, string> hashmap = {
        {2.0400, "This is two"},
        {1.0030, "This is one"},
        {4.0005, "This is fourth"},
        {3.1000, "This is three"},
        {5.0450, "This is five"}
    };

    map<double, string> sorted_map = receiver(hashmap);

    for (auto& pair : sorted_map) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
