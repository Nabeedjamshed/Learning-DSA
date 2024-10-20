#include<iostream>
#include<queue>
using namespace std;

class PriorityQueue {
    public:
        priority_queue<int> maxHeap;
        void insertMax(int n) {
            maxHeap.push(n);
        }

        priority_queue<int, vector<int>, greater<int>> minHeap;
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
    PriorityQueue pq;

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
