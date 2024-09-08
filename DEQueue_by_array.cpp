#include <iostream>
using namespace std;

class DEQueue
{
private:
    static const int max_size = 10;
    int DEqueue[max_size];
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
    bool isFull()
    {
        return Front == (tail + 1) % max_size;
    }
    void enqueueLast(int x)
    {
        if (isFull())
        {
            cout << "DEQueue is full. " << endl;
        }
        else if (isEmpty())
        {
            Front = 0;
            tail = 0;
        }
        else
        {
            tail = (tail + 1) % max_size;
        }
        DEqueue[tail] = x;
    }
    void enqueuefront(int x)
    {
        if (isEmpty())
        {
            Front = tail = 0;
            DEqueue[Front] = x;
        }
        else
        {
            if (isFull())
            {
                cout << "DEQueue is full. " << endl;
            }
            else
            {
                // Front--;
                Front = (Front - 1 + max_size) % max_size; // for circular nature
                DEqueue[Front] = x;
            }
        }
    }
    int dequeuefront()
    {
        if (isEmpty())
        {
            cout << "DEQueue is Empty. " << endl;
        }
        else
        {
            int deq = DEqueue[Front];
            if (Front == tail)
            {
                Front = -1;
                tail = -1;
            }
            else
            {
                Front = (Front + 1) % max_size;
            }
            return deq;
        }
    }
    int dequeuelast()
    {
        if (isEmpty())
        {
            cout << "DEQueue is Empty. " << endl;
        }
        else
        {
            int deq = DEqueue[tail];
            if (Front == tail)
            {
                Front = -1;
                tail = -1;
            }
            else
            {
                tail--;
                tail = (tail - 1 + max_size) % max_size; // for circular nature
            }
            return deq;
        }
    }
    int front()
    {
        if (isEmpty())
        {
            cout << "DEQueue is Empty. " << endl;
        }
        else
        {
            return DEqueue[Front];
        }
    }
    void print()
    {
        for (int i = Front; i <= tail; i++)
        {
            cout << DEqueue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    DEQueue q;
    q.enqueueLast(2);
    q.enqueueLast(4);
    q.enqueueLast(5);
    q.enqueueLast(7);
    q.print();
    cout << "The deleted element which is delete is: " << q.dequeuefront() << endl;
    cout << "The top element in DEqueue is: " << q.front() << endl;
    q.print();
    q.enqueuefront(1);
    q.print();
    cout << "The deleted element which is delete is: " << q.dequeuelast() << endl;
    q.print();
    return 0;
}