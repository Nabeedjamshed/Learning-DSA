// #include <iostream>
// using namespace std;


// class NabeedAli_Lab03{
// private:
//     int top;
//     int *stack;
//     int capacity = 5;


// public:
//     NabeedAli_Lab03(){
//         top = -1;
//         stack = new int[capacity];
//     }


//     ~NabeedAli_Lab03(){
//         delete[] stack;
//     }


//     void push(int x){
//         if (top == capacity - 1){
//             resize();
//         }
//         top++;
//         stack[top] = x;
//     }
//     void pop(){
//         if (top == -1){
//             cout << "Stack underflow" << endl;
//             return;
//         }
//         top--;
//     }


//     int peek(){
//         if (top == -1){
//             cout << "Stack is empty." << endl;
//             return -1;
//         }
//         return stack[top];
//     }


//     bool isEmpty(){
//         return (top == -1);
//     }


//     int size(){
//         return top + 1;
//     }


//     void resize(){
//         int *newStack = new int[capacity * 2];
//         for (int i = 0; i <= top; i++)
//         {
//             newStack[i] = stack[i];
//         }
//         delete[] stack;
//         stack = newStack;
//         capacity *= 2;
//     }


//     void display(){
//         if (top == -1){
//             cout << "Stack is empty." << endl;
//             return;
//         }
//         cout << "Stack elements: ";
//         for (int i = 0; i <= top; i++){
//             cout << stack[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main(){
//     NabeedAli_Lab03 org;


//     org.push(1);
//     org.push(2);
//     org.push(3);
//     org.push(4);
//     org.push(5);


//     org.display();


//     org.pop();
//     org.display();


//     int t = org.peek();
//     if (t != -1){
//         cout << "Peek element is: " << t << endl;
//     }
//     if (org.isEmpty()){
//         cout << "Stack is empty." << endl;
//     }
//     else{
//         cout << "Stack contains elements." << endl;
//     }


//     cout << "Size of the stack is: " << org.size() << endl;
//     cout<<"After resizing"<<endl;
//     org.push(6);
//     org.push(7);
//     org.push(8);


//     org.display();
//     return 0;
// }


// #include <iostream>
// #include<string>
// using namespace std;


// class NabeedAli_Lab03{
// private:
//     int top;
//     char *stack;
//     int capacity = 5;


// public:
//     NabeedAli_Lab03(){
//         top = -1;
//         stack = new char[capacity];
//     }


//     ~NabeedAli_Lab03(){
//         delete[] stack;
//     }
//     void push(char x){
//         if (top == capacity - 1){
//             resize();
//         }
//         top++;
//         stack[top] = x;
//     }


//     void pop(){
//         if (top == -1)
//         {
//             cout << "Stack underflow." << endl;
//             return;
//         }
//         top--;
//     }


//     char peek(){
//         if (top == -1)
//         {
//             cout << "Stack is empty." << endl;
//             return -1;
//         }
//         return stack[top];
//     }


//     bool isEmpty(){
//         return (top == -1);
//     }


//     void resize(){
//         char *newStack = new char[capacity * 2];
//         for (int i = 0; i <= top; i++)
//         {
//             newStack[i] = stack[i];
//         }
//         delete[] stack;
//         stack = newStack;
//         capacity *= 2;
//     }
// };


// int main(){
//     string org;
//     cout << "Enter a phrase: ";
//     getline(cin,org);
//     NabeedAli_Lab03 S;
//     for (int i = 0; i < org.length(); i++){
//         S.push(org[i]);
//     }


//     for (int i = 0; i < org.length(); i++){
//         char ans = S.peek();
//         cout << ans;
//         S.pop();
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;


// class NabeedAli_Lab03{
// private:
//     int top;
//     char *stack;
//     int capacity = 5;


// public:
//     NabeedAli_Lab03(){
//         top = -1;
//         stack = new char[capacity];
//     }


//     ~NabeedAli_Lab03(){
//         delete[] stack;
//     }


//     void push(char x){
//         if (top == capacity - 1)
//         {
//             resize();
//         }
//         top++;
//         stack[top] = x;
//     }


//     void pop(){
//         if (top == -1)
//         {
//             cout << "Stack underflow." << endl;
//             return;
//         }
//         top--;
//     }


//     char peek(){
//         if (top == -1)
//         {
//             cout << "Stack is empty." << endl;
//             return -1;
//         }
//         return stack[top];
//     }


//     bool isEmpty(){
//         return (top == -1);
//     }


//     void resize(){
//         char *newStack = new char[capacity * 2];
//         for (int i = 0; i <= top; i++)
//         {
//             newStack[i] = stack[i];
//         }
//         delete[] stack;
//         stack = newStack;
//         capacity *= 2;
//     }
// };
// int main(){
//     string org;
//     cout << "Enter a phrase: ";
//     cin >> org;
//     NabeedAli_Lab03 S;
//     for (int i = 0; i < org.length(); i++){
//         S.push(org[i]);
//     }


//     string ans = "";
//     for (int i = 0; i < org.length(); i++){
//         ans += S.peek();
//         S.pop();
//     }


//     if (org == ans){
//         cout << "Your entered string is Palindrome";
//     }
//     else{
//         cout << "Your entered string is not Palindrome";
//     }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;


// class NabeedAli_Lab03{
// private:
//     int top;
//     char *stack;
//     int capacity = 5;


// public:
//     NabeedAli_Lab03(){
//         top = -1;
//         stack = new char[capacity];
//     }


//     ~NabeedAli_Lab03(){
//         delete[] stack;
//     }


//     void push(char x){
//         if (top == capacity - 1)
//         {
//             resize();
//         }
//         top++;
//         stack[top] = x;
//     }
//     void pop(){
//         if (top == -1)
//         {
//             return;
//         }
//         top--;
//     }


//     char peek(){
//         if (top == -1){
//             return '\0';
//         }
//         return stack[top];
//     }


//     bool isEmpty(){
//         return (top == -1);
//     }


//     void resize(){
//         char *newStack = new char[capacity * 2];
//         for (int i = 0; i <= top; i++){
//             newStack[i] = stack[i];
//         }
//         delete[] stack;
//         stack = newStack;
//         capacity *= 2;
//     }


//     string process(string org){
//         for (int i = 0; i < org.length(); i++){
//             if (org[i] != '#'){
//                 push(org[i]);
//             }
//             else{
//                 pop();
//             }
//         }


//         string result = "";
//         while (!isEmpty()){
//             result += peek();
//             pop();
//         }
//         return result;
//     }
// };
// int main()
// {
//     string first;
//     cout << "Enter a phrase: ";
//     cin >> first;


//     string second;
//     cout << "Enter a phrase: ";
//     cin >> second;
//     NabeedAli_Lab03 S1;
//     string fir = S1.process(first);
//     string sec = S1.process(second);
//     reverse(fir.begin(), fir.end());
//     reverse(sec.begin(), sec.end());
//     cout << fir << endl
//          << sec << endl;
//     if (fir == sec){
//         cout << "True";
//     }
//     else{
//         cout << "False";
//     }
//     return 0;
// }


#include <iostream>
using namespace std;


class NabeedAli_Lab03{
private:
    int top;
    int *stack;
    int capacity = 5;


public:
    NabeedAli_Lab03(){
        top = -1;
        stack = new int[capacity];
    }


    ~NabeedAli_Lab03(){
        delete[] stack;
    }


    void push(int x){
        if (top == capacity - 1)
        {
            resize();
        }
        top++;
        stack[top] = x;
    }


    void pop(){
        if (top == -1)
        {
            cout << "Stack underflow. Stack is empty." << endl;
            return;
        }
        top--;
    }


    int peek(){
        if (top == -1){
            cout << "Stack is empty." << endl;
            return -1;
        }
        return stack[top];
    }


    bool isEmpty(){
        return (top == -1);
    }


    void resize(){
        int *newStack = new int[capacity * 2];
        for (int i = 0; i <= top; i++)
        {
            newStack[i] = stack[i];
        }
        delete[] stack;
        stack = newStack;
        capacity *= 2;
    }


    void display(){
        if (top == -1){
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Fibonacci series: ";
        while (!isEmpty()){
            cout << peek() << " ";
            pop();
        }
    }
    int fibonacci(int n){
        if (n == 0){
            return 0;
        }
        else if (n == 1){
            return 1;
        }
        else{
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
    void fibonacciseries(int n){
        for (int i = 1; i <= n; i++){
            push(fibonacci(i));
        }
        display();
    }
};


int main(){
    NabeedAli_Lab03 S;
    int n;
    cout<<”Enter a number: ”;
    cin>>n;
    S.fibonacciseries(n);
    return 0;
}
