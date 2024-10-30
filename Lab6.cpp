// #include <iostream>
// using namespace std;

// class NabeedAli_lab06 {
// private:
//     static const int max_size = 10;
//     int queue[max_size];
//     int front = -1;
//     int rear = -1;

// public:
//     bool isEmpty() {
//         return (front == -1 && rear == -1);
//     }

//     bool isFull() {
//         return (rear == max_size - 1);
//     }

//     void enqueue(int x) {
//         if (isFull()) {
//             cout << "Queue is full." << endl;
//             return;
//         }
//         if (isEmpty()) {
//             front = 0;
//             rear = 0;
//         } else {
//             rear++;
//         }
//         queue[rear] = x;
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return -1; 
//         }
//         int deq = queue[front];
//         if (front == rear) {
//             front = -1;
//             rear = -1;
//         } else {
//             front++;
//         }
//         return deq;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }
//         for (int i = front; i <= rear; i++) {
//             cout << queue[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     NabeedAli_lab06 q;
//     q.enqueue(2);
//     q.enqueue(4);
//     q.enqueue(5);
//     q.enqueue(7);
//     q.display(); 

//     cout << "The deleted element is: " << q.dequeue() << endl;
//     q.display();
//     return 0;
// }





// #include <iostream>
// using namespace std;

// class NabeedAli_lab06 {
// private:
//     static const int max_size = 10;
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

    // void display() {
    //     if (isEmpty()) {
    //         cout << "Queue is empty." << endl;
    //         return;
    //     }

    //     int i = front;
    //     while (i != rear) {
    //         cout << queue[i] << " ";
    //         i = (i + 1) % max_size;
    //     }
    //     cout << queue[rear] << endl;  
    // }
// };

// int main() {
//     NabeedAli_lab06 q;
//     q.enqueue(2);
//     q.enqueue(4);
//     q.enqueue(5);
//     q.enqueue(7);
//     q.display(); 
//     cout << "Current number of elements in the queue is: " << q.size() << endl;
//     cout << "The deleted element is: " << q.dequeue() << endl;
//     q.display();
//     cout << "Current number of elements in the queue is: " << q.size() << endl;
//     cout << "The front element in the queue is: " << q.Front() << endl;
//     return 0;
// }
