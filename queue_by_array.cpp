#include <iostream>
using namespace std;

class Queue
{
private:
    static const int max_size = 10;
    int queue[max_size];
    int Front = -1;
    int tail = -1;

public:
    bool isEmpty()
    {
        if (Front == -1 && tail == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int x)
    {
        if (Front == (tail+1)%10)
        {
            cout << "Queue is full. " << endl;
        }
        else if (isEmpty())
        {
            Front = 0;
            tail = 0;
        }
        else
        {
            tail = (tail + 1) % 10 ;
        }
        queue[tail] = x;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty. " << endl;
        }
        else
        {
            int deq = queue[Front];
            if (Front == tail)
            {
                Front = -1;
                tail = -1;
            }
            else
            {
                Front = (Front + 1)%10;
            }
            return deq;
        }
    }
    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty. " << endl;
        }
        else
        {
            return queue[Front];
        }
    }
    void print()
    {
        for (int i = Front; i <= tail; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(7);
    q.print();
    cout << "The deleted element which is delete is: " << q.dequeue() << endl;
    cout << "The top element in queue is: " << q.front() << endl;
    q.print();
    return 0;
}