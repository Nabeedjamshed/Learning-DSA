// #include <iostream>
// using namespace std;

// class CircularQueue {
// private:
//     struct Node {
//         int data;
//         Node* next;
//     };
//     Node* head = nullptr;
//     Node* tail = nullptr;

// public:
//     bool isEmpty() {
//         return head == nullptr && tail == nullptr;
//     }

//     void enqueue(int n) {
//         Node* temp = new Node();
//         temp->data = n;
//         temp->next = nullptr;
//         if (isEmpty()) {
//             head = temp;
//             tail = temp;
//             tail->next = head;
//         } else {
//             tail->next = temp;
//             tail = temp;
//             tail->next = head;
//         }
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }
//         Node* temp = head;
//         if (head == tail) {
//             head = nullptr;
//             tail = nullptr;
//         } else {
//             head = temp->next;
//             tail->next = head;
//         }
//         delete temp;
//     }

//     int front() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return -1;
//         } else {
//             return head->data;
//         }
//     }

//     void print() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }
//         Node* temp = head;
//         do {
//             cout << temp->data << " ";
//             temp = temp->next;
//         } while (temp != head);
//         cout << endl;
//     }
// };

// int main() {
//     CircularQueue q;
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     q.enqueue(4);
//     q.print();
//     q.dequeue();
//     q.print();
//     cout << "The first element is: " << q.front() << endl;
//     return 0;
// }







#include <iostream>
#include <vector>
using namespace std;

class BrowserHistory {
private:
    vector<string> history;
    int currentIndex;

public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        currentIndex = 0;
        cout << "Initialized with homepage: " << homepage << endl;
    }

    void visit(string url) {
        history.resize(currentIndex + 1);
        history.push_back(url);
        currentIndex++;
        cout << "Visited: " << url << ", Current page is now: " << history[currentIndex] << endl;
    }

    string back(int steps) {
        int oldIndex = currentIndex;
        currentIndex = max(0, currentIndex - steps);
        cout << "Moved back from " << history[oldIndex] << " to " << history[currentIndex] << endl;
        return history[currentIndex];
    }

    string forward(int steps) {
        int oldIndex = currentIndex;
        currentIndex = min((int)history.size() - 1, currentIndex + steps);
        cout << "Moved forward from " << history[oldIndex] << " to " << history[currentIndex] << endl;
        return history[currentIndex];
    }
};

int main() {
    BrowserHistory browserHistory("leetcode.com");
    browserHistory.visit("google.com"); 
    browserHistory.visit("facebook.com");
    browserHistory.visit("youtube.com");

    cout << "Current page after back(1): " << browserHistory.back(1) << endl;
    cout << "Current page after back(1): " << browserHistory.back(1) << endl;
    cout << "Current page after forward(1): " << browserHistory.forward(1) << endl;

    browserHistory.visit("linkedin.com");

    cout << "Current page after forward(2): " << browserHistory.forward(2) << endl;
    cout << "Current page after back(2): " << browserHistory.back(2) << endl;
    cout << "Current page after back(7): " << browserHistory.back(7) << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int value) : data(value), next(nullptr), prev(nullptr) {}
// };

// class Deque {
// private:
//     Node* front;
//     Node* rear;

// public:
//     Deque() : front(nullptr), rear(nullptr) {}

//     void insertFront(int value) {
//         Node* newNode = new Node(value);
//         if (front == nullptr) {
//             front = rear = newNode;
//         } else {
//             newNode->next = front;
//             front->prev = newNode;
//             front = newNode;
//         }
//     }

//     void insertRear(int value) {
//         Node* newNode = new Node(value);
//         if (rear == nullptr) {
//             front = rear = newNode;
//         } else {
//             newNode->prev = rear;
//             rear->next = newNode;
//             rear = newNode;
//         }
//     }

//     void deleteFront() {
//         if (front == nullptr) {
//             cout << "Deque is empty";
//             return;
//         }
//         Node* temp = front;
//         front = front->next;
//         if (front == nullptr) {
//             rear = nullptr;
//         } else {
//             front->prev = nullptr;
//         }
//         delete temp;
//     }

//     void deleteRear() {
//         if (rear == nullptr) {
//             cout << "Deque is empty";
//             return;
//         }
//         Node* temp = rear;
//         rear = rear->prev;
//         if (rear == nullptr) {
//             front = nullptr;
//         } else {
//             rear->next = nullptr;
//         }
//         delete temp;
//     }

//     bool isEmpty() const {
//         return front == nullptr;
//     }

//     int getFront() const {
//         if (front == nullptr) {
//             throw runtime_error("Deque is empty");
//         }
//         return front->data;
//     }

//     int getRear() const {
//         if (rear == nullptr) {
//             throw runtime_error("Deque is empty");
//         }
//         return rear->data;
//     }

//     void display() const {
//         if (front == nullptr) {
//             cout << "Deque is empty"<<endl;
//             return;
//         }
//         Node* temp = front;
//         cout << "Deque: ";
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Deque deque;

//     deque.insertRear(10);
//     deque.insertFront(20);
//     deque.insertRear(30);
//     deque.insertFront(40);

//     deque.display();

//     cout << "Front element: " << deque.getFront() << endl;
//     cout << "Rear element: " << deque.getRear() << endl;

//     deque.deleteFront();
//     deque.deleteRear();
//     deque.display();

//     return 0;
// }
