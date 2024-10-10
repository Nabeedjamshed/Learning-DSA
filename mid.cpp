#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int max_size = 5;
        int *stack;
    public:
        Stack(){
            int top = -1;
            stack = new int[max_size];
        }
        ~Stack(){
            delete[] stack;
        }
        bool isFull(){
            return top == max_size;
        }
        bool isEmpty(){
            return top==-1;
        }
        void push(int element){
            if (isFull())
            {
                resize();
            } else {
                top++;
                stack[top] = element;
            }
        }
        void pop(){
            if (isEmpty())
            {
                cout<<"Stack is empty"<<endl;
            } else {
                top--;
            }
        }
        int peek(){
            return stack[top];
        }
        int size(){
            return top+1;
        }
        void resize(){
            int *newstack = new int[max_size*2];
            for (int i = 0; i <= top; i++)
            {
                newstack[i] = stack[i];
            }
            delete[] stack;
            stack = newstack;
            max_size *= 2;            
        }
        void display(){
            for (int i = 0; i <= top; i++)
            {
                cout<<stack[i]<<" ";
            } 
            cout<<endl;
        }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    s.pop();
    s.display();
    cout<<s.peek()<<endl;
    return 0;
}

