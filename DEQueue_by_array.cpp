#include <iostream>
using namespace std;

class DEQueue
{
private:
    static const int max_size = 10;
    int DEqueue[max_size];
    int Front = -1;
    int rear = -1;
    int count = 0;
public:
    bool isEmpty()
    {
        if (Front == -1 && rear == -1)
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
        return count == max_size;
    }
    void insertRear(int x)
    {
        if (isFull())
        {
            cout << "DEQueue is full. " << endl;
        }
        else if (isEmpty())
        {
            Front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % max_size;
        }
        DEqueue[rear] = x;
        count++;
    }
    void insertFront(int x)
    {
        if (isEmpty())
        {
            Front = rear = 0;
            DEqueue[Front] = x;
            count++;
        }
        else
        {
            if (isFull())
            {
                cout << "DEQueue is full. " << endl;
            }
            else
            {
                Front = (Front - 1 + max_size) % max_size; // for circular nature
                DEqueue[Front] = x;
                count++;
            }
        }
    }
    int deleteFront()
    {
        if (isEmpty())
        {
            cout << "DEQueue is Empty. " << endl;
        }
        else
        {
            int deq = DEqueue[Front];
            if (Front == rear)
            {
                Front = -1;
                rear = -1;
            }
            else
            {
                Front = (Front + 1) % max_size;
            }
            count--;
            return deq;
        }
    }
    int deleteRear()
    {
        if (isEmpty())
        {
            cout << "DEQueue is Empty. " << endl;
        }
        else
        {
            int deq = DEqueue[rear];
            if (Front == rear)
            {
                Front = -1;
                rear = -1;
            }
            else
            {
                rear = (rear - 1 + max_size) % max_size; // for circular nature
            }
            count--;
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
    int size(){
        return count;
    }
    void display()
    {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        int i = Front;
        while(i != rear){
            cout<<DEqueue[i]<<" ";
            i = (i+1)%max_size;
        }
        cout<<DEqueue[rear]<<" ";
        cout<<endl;
    }
};

int main()
{
    DEQueue q;
    q.insertRear(2);
    q.insertRear(4);
    q.insertRear(5);
    q.insertRear(7);
    q.display();
    cout << "Current number of elements in the DEQueue is: " << q.size() << endl;
    cout << "The deleted element is: " << q.deleteFront() << endl;
    q.display();
    cout << "Current number of elements in the DEQueue is: " << q.size() << endl;
    cout << "The top element in DEqueue is: " << q.front() << endl;
    cout<<"Insert from front"<<endl;
    q.insertFront(1);
    q.display();
    cout << "The deleted element from rear is: " << q.deleteRear() << endl;
    q.display();
    return 0;
}