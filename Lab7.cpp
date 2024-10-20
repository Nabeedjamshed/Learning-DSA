// #include<iostream>
// using namespace std;

// class NabeedAli_Lab07 {
//     int front;
//     int rear;
//     int k;
//     int *circulardequeue;

// public:
//     NabeedAli_Lab07(int size) {
//         k = size;
//         front = -1;
//         rear = -1;
//         circulardequeue = new int[k];
//     }

//     bool isFull() {
//         return ((front == rear + 1) || (front == 0 && rear == k - 1));
//     }

//     bool isEmpty() {
//         return (front == -1);
//     }

//     void insertFront(int x) {
//         if (isFull()) {
//             cout << "Dequeue is overflow" << endl;
//         } else {
//             if (isEmpty()) {
//                 front = rear = 0;
//             } else if (front == 0) {
//                 front = k - 1;
//             } else {
//                 front--;
//             }
//             circulardequeue[front] = x;
//         }
//     }

//     void insertLast(int x) {
//         if (isFull()) {
//             cout << "Dequeue is overflow" << endl;
//         } else {
//             if (isEmpty()) {
//                 front = rear = 0;
//             } else {
//                 rear = (rear + 1) % k;
//             }
//             circulardequeue[rear] = x;
//         }
//     }

//     void deleteFront() {
//         if (isEmpty()) {
//             cout << "Dequeue is already empty" << endl;
//         } else if (front == rear) {
//             front = rear = -1;
//         } else {
//             front = (front + 1) % k;
//         }
//     }

//     void deleteLast() {
//         if (isEmpty()) {
//             cout << "Dequeue is already empty" << endl;
//         } else if (front == rear) {
//             front = rear = -1;
//         } else if (rear == 0) {
//             rear = k - 1;
//         } else {
//             rear--;
//         }
//     }

//     int getFront() {
//         if (isEmpty()) {
//             return -1;
//         }
//         return circulardequeue[front];
//     }

//     int getRear() {
//         if (isEmpty()) {
//             return -1;
//         }
//         return circulardequeue[rear];
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is underflow." << endl;
//             return;
//         }
//         int i = front;
//         while (i != rear) {
//             cout << circulardequeue[i] << " ";
//             i = (i + 1) % k;
//         }
//         cout << circulardequeue[rear] << endl;
//     }
// };

// int main() {
//     NabeedAli_Lab07 myCircularDeque(3); 
//     myCircularDeque.insertLast(1);
//     myCircularDeque.insertLast(2);
//     myCircularDeque.insertFront(3);
//     myCircularDeque.insertFront(4); 
//     cout << myCircularDeque.getRear() << endl;  
//     cout << (myCircularDeque.isFull() ? "True" : "False") << endl;  
//     myCircularDeque.display();
//     cout<<"Delete from last"<<endl;
//     myCircularDeque.deleteLast();
//     myCircularDeque.display();
//     cout<<"Insert from front"<<endl;
//     myCircularDeque.insertFront(4);
//     myCircularDeque.display();  
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class NabeedAli_lab06 {
// private:
//     static const int max_size = 100;  
//     int queue[max_size];
//     int front = -1;
//     int rear = -1;
//     int count = 0;

// public:
//     bool isEmpty() {
//         return (front == -1 && rear == -1);
//     }

//     bool isFull() {
//         return (count == max_size);
//     }

//     void enqueue(int x) {
//         if (isFull()) {
//             cout << "Queue overflow." << endl;
//             return;
//         }
//         if (isEmpty()) {
//             front = 0;
//             rear = 0;
//         } else {
//             rear = (rear + 1) % max_size;
//         }
//         queue[rear] = x;
//         count++;
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue underflow." << endl;
//             return -1;  
//         }
//         int deq = queue[front];
//         if (front == rear) {
//             front = -1;
//             rear = -1;
//         } else {
//             front = (front + 1) % max_size;
//         }
//         count--;
//         return deq;
//     }

//     int Front() {
//         if (isEmpty()) {
//             cout << "Queue underflow." << endl;
//             return -1;  
//         }
//         return queue[front];
//     }

//     int size() {
//         return count;
//     }
//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }

//         int i = front;
//         while (i != rear) {
//             cout << queue[i] << " ";
//             i = (i + 1) % max_size;
//         }
//         cout << queue[rear] << endl;  
// }
// };

// int main() {
//     NabeedAli_lab06 q;
//     int n, k;
    
//     cout << "Enter total members: ";
//     cin >> n;
//     cout << "Enter jump: ";
//     cin >> k;

//     for (int i = 1; i <= n; i++) {
//         q.enqueue(i);
//     }
//     while (q.size() > 1) {
//         for (int i = 1; i < k; i++) {
//             int temp = q.dequeue();
//             q.enqueue(temp);  
//         }
//         q.dequeue();
//     }
//     cout << "The winner is friend number: " << q.Front() << endl;
//     return 0;
// }

#include<iostream>
#include<queue>
using namespace std;

class NabeedAli_Lab07 {
    private:
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
    public:
        void insertMax(int n) {
            maxHeap.push(n);
        }

        void insertMin(int n) {
            minHeap.push(n);
        }

        void displayMax() {
            priority_queue<int> temp = maxHeap;
            cout << "Max Heap: ";
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }

        void displayMin() {
            priority_queue<int, vector<int>, greater<int>> temp = minHeap;
            cout << "Min Heap: ";
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
};

int main() {
    NabeedAli_Lab07 pq;

    pq.insertMax(1);
    pq.insertMax(2);
    pq.insertMax(3);
    pq.insertMax(4);
    pq.displayMax(); 

    pq.insertMin(1);
    pq.insertMin(2);
    pq.insertMin(3);
    pq.insertMin(4);
    pq.displayMin(); 

    return 0;
}
