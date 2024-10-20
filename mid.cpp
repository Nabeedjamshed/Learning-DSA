// #include<iostream>
// using namespace std;

// class Stack{
//     private:
//         int top;
//         int max_size = 5;
//         int *stack;
//     public:
//         Stack(){
//             top = -1;
//             stack = new int[max_size];
//         }
//         ~Stack(){
//             delete[] stack;
//         }
//         bool isFull(){
//             return top == max_size;
//         }
//         bool isEmpty(){
//             return top==-1;
//         }
//         void push(int element){
//             if (isFull())
//             {
//                 resize();
//             } else {
//                 top++;
//                 stack[top] = element;
//             }
//         }
//         void pop(){
//             if (isEmpty())
//             {
//                 cout<<"Stack is empty"<<endl;
//             } else {
//                 top--;
//             }
//         }
//         int peek(){
//             return stack[top];
//         }
//         int size(){
//             return top+1;
//         }
//         void resize(){
//             int *newstack = new int[max_size*2];
//             for (int i = 0; i <= top; i++)
//             {
//                 newstack[i] = stack[i];
//             }
//             delete[] stack;
//             stack = newstack;
//             max_size *= 2;            
//         }
//         void display(){
//             for (int i = 0; i <= top; i++)
//             {
//                 cout<<stack[i]<<" ";
//             } 
//             cout<<endl;
//         }
// };
// int main() {
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.display();
//     s.pop();
//     s.display();
//     cout<<s.peek()<<endl;
//     return 0;
// }


// #include<iostream>
// #include<stack>
// using namespace std;

// bool check(char open, char close){
//     if ((open == '{' && close == '}') || (open == '[' && close == ']') || (open == '(' && close == ')'))
//     {
//         return true;
//     }
//     return false;
// }
// bool arestackbalance(string s){
//     stack <char> S;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//         {
//             S.push(s[i]);
//         } else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
//         {
//             if(S.empty() || !check(S.top(), s[i])){;
//                 return false;
//             }
//             S.pop();
//         }   
//     }
//     if (S.empty())
//     {
//         return true;
//     } else {
//         return false;
//     }
// }
// int main() {
//     string s;
//     cout << "Enter a parenthesis: ";
//     cin >> s;
//     if (arestackbalance(s))
//     {
//         cout << "Balance";
//     }
//     else
//     {
//         cout << "Not balance";
//     }
//     return 0;
// }


#include<iostream>
#include<climits>
using namespace std;

// void selectionsort(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min= j;
//             }
//         }
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }
// }


// void insertsort(int arr[], int n){
//     for (int i = 1; i < n; i++)
//     {
//         int val = arr[i];
//         int hole = i;
//         while (hole > 0 && val < arr[hole-1])
//         {
//             arr[hole] = arr[hole-1];
//             hole--;
//         }
//         arr[hole] = val;
//     }
// }

// void bubblesort(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// void merge(int arr[], int start, int mid, int end){
//     int n1 = mid-start+1;
//     int n2 = end-mid;
//     int left[n1+1];
//     int right[n2+1];
//     int k=0;
//     for (int i = 0; i < n1; i++)
//     {
//         left[i] = arr[k];
//         k++;
//     }
//     for (int j = 0; j < n2; j++)
//     {
//         right[j] = arr[k];
//         k++;
//     }
//     left[n1] = INT_MAX;
//     right[n2] = INT_MAX;
//     int i = 0;
//     int j = 0;
//     for (int k = start; k <= end; k++)
//     {
//         if (left[i] <= right[j])
//         {
//             arr[k] = left[i];
//             i++;
//         } else {
//             arr[k] = right[j];
//             j++;
//         }  
//     }
// }
// void mergesort(int arr[], int start, int end){
//     if (start<end)
//     {
//         int mid = (start+end) / 2;
//         mergesort(arr, start , mid);
//         mergesort(arr, mid+1, end);
//         merge(arr, start, mid, end);
//     }  
// }

// int partition(int arr[], int start, int end){
//     int pivot = arr[start];
//     int i = start;int j = end;
//     while (start <end)
//     {
//         while (arr[i] <= pivot && i < end)
//         {
//             i++;
//         }
//         while (arr[j] > pivot && j > start)
//         {
//             j--;
//         }
//         if (start < end)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[j], arr[start]);
//     return j;
    
// }
// void quicksort(int arr[], int start, int end){
//     if (start < end)
//     {
//         int par = partition(arr, start, end);
//         quicksort(arr, start, par-1);
//         quicksort(arr, par+1, end);
//     } 
// }
// int main() {
//     int arr[] = {3,2,1,4};
//     int n = int(sizeof(arr) / sizeof(arr[0]));
//     quicksort(arr, 0, n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


bool binarysearch(int arr[], int low, int high, int target){
    if(low<high)
    {
        int mid = (low+high) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        
        else if (arr[mid > target])
        {
            binarysearch(arr,low, mid-1,target);
        } else {
            binarysearch(arr,mid+1, high,target);
        }   
    }
    return false;
}
// bool binarysearch(int arr[], int low, int high, int target){
//     while (low<high)
//     {
//         int mid = (low+high) / 2;
//         if (arr[mid] == target)
//         {
//             return true;
//         }
        
//         else if (arr[mid > target])
//         {
//             high = mid-1;
//         } else {
//             low = mid +1;
//         }   
//     }
//     return false;
// }
int main() {
    int arr[] = {3,2,1,4};
    int n = int(sizeof(arr) / sizeof(arr[0]));
    bool ans = binarysearch(arr, 0, n-1,5);
    if (ans)
    {
        cout<<"Find"<<endl;
    } else {
        cout<<"Not Find"<<endl;
    }
    
    cout<<endl;
    return 0;
}