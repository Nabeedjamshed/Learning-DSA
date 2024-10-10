// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// using namespace std;

// class NabeedAli_Lab04 {
//     public:
//         void bubblesort(int arr[], int n) {
//             int comparison = 0;
//             int swap = 0;
//             bool flag = false;
//             for (int i = 0; i < n; i++) {
//                 flag = false;
//                 for (int j = 0; j < n - i - 1; j++) {
//                     comparison++;
//                     if (arr[j] > arr[j + 1]) {
//                         int temp = arr[j];
//                         arr[j] = arr[j + 1];
//                         arr[j + 1] = temp;
//                         flag = true;
//                         swap++;
//                     }
//                 }
//                 if (!flag) break; // exit if no swaps were made
//             }
//             cout << "Total comparisons in Bubble sort: " << comparison << endl;
//             cout << "Total swaps in Bubble sort: " << swap << endl;
//         }

//         void selectionsort(int arr[], int n) {
//             int comparison = 0;
//             int swap = 0;
//             for (int i = 0; i < n; i++) {
//                 int min = i;
//                 for (int j = i + 1; j < n; j++) {
//                     comparison++;
//                     if (arr[min] > arr[j]) {
//                         min = j;
//                     }
//                 }
//                 if (min != i) {
//                     int temp = arr[min];
//                     arr[min] = arr[i];
//                     arr[i] = temp;
//                     swap++;
//                 }
//             }
//             cout << "Total comparisons in Selection sort: " << comparison << endl;
//             cout << "Total swaps in Selection sort: " << swap << endl;
//         }

//         void insertionsort(int arr[], int n) {
//             int comparison = 0;
//             int swap = 0;
//             for (int i = 1; i < n; i++) {
//                 int val = arr[i];
//                 int hole = i;
//                 while (hole > 0 && arr[hole - 1] > val) {
//                     arr[hole] = arr[hole - 1];
//                     hole--;
//                     comparison++;
//                     swap++;
//                 }
//                 arr[hole] = val;
//                 swap++;
//             }
//             cout << "Total comparisons in Insertion sort: " << comparison << endl;
//             cout << "Total swaps in Insertion sort: " << swap << endl;
//         }
// };

// int main() {
//     NabeedAli_Lab04 sort;
//     int n, range;
//     cout << "How many numbers do you want to enter: ";
//     cin >> n;
//     cout << "Enter the range: ";
//     cin >> range;

//     int arr[n];
//     srand(time(0));

//     // Generating random numbers
//     for (int i = 0; i < n; i++) {
//         srand.seed();
//         arr[i] = rand() % range;
//     }

//     int choice;
//     do {
//         // Reset array
//         for (int i = 0; i < n; i++) {
//             arr[i] = rand() % range;
//         }

//         cout << "1. Bubble Sort" << endl;
//         cout << "2. Insertion Sort" << endl;
//         cout << "3. Selection Sort" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 sort.bubblesort(arr, n);
//                 for (int i = 0; i < n; i++) {
//                     cout << arr[i] << " ";
//                 }
//                 cout << endl;
//                 break;
//             }
//             case 2: {
//                 sort.insertionsort(arr, n);
//                 for (int i = 0; i < n; i++) {
//                     cout << arr[i] << " ";
//                 }
//                 cout << endl;
//                 break;
//             }
//             case 3: {
//                 sort.selectionsort(arr, n);
//                 for (int i = 0; i < n; i++) {
//                     cout << arr[i] << " ";
//                 }
//                 cout << endl;
//                 break;
//             }
//             case 4: {
//                 cout << "Exiting..." << endl;
//                 break;
//             }
//             default: {
//                 cout << "Invalid choice. Try again." << endl;
//             }
//         }
//     } while (choice != 4);

//     return 0;
// }

// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // class NabeedAli_Lab04 {
// // public:
// //     void check(int arr[], int n, int k) {
// //         sort(arr, arr + n);
// //         int count = 0;
// //         for (int i = 0; i < n; i++) {
// //             if (k >= arr[i]) {
// //                 k = k - arr[i];
// //                 count++;
// //             } else {
// //                 break;
// //             }
// //         }
// //         cout << "Total number of toys you can buy: " << count << endl;
// //     }
// // };

// // int main() {
// //     int n, k;
// //     cout << "How many toy prices do you want to enter? ";
// //     cin >> n;
// //     const int MAX_SIZE = n;
// //     int arr[MAX_SIZE];
// //     for (int i = 0; i < n; i++) {
// //         cout << "Enter the price of toy " << i + 1 << ": ";
// //         cin >> arr[i];
// //     }
// //     cout << "Enter your budget: ";
// //     cin >> k;

// //     NabeedAli_Lab04 cost;
// //     cost.check(arr, n, k);
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class NabeedAli_Lab04{
//     public:
//         void bubbleSortModified(int arr[], int n) {
//             bool flag;
//             for (int i = 0; i < n - 1; i++) {
//                 flag = false;
//                 for (int j = 0; j < n - i - 1; j++) {
//                     if (arr[j] > arr[j + 1]) {
//                         int temp = arr[j];
//                         arr[j] = arr[j + 1];
//                         arr[j + 1] = temp;
//                         flag = true;
//                     }
//                 }
//                 if (!flag) {
//                     break;
//                 }
//             }
//         }

//         void printArray(int arr[], int size) {
//             for (int i = 0; i < size; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
// };
// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     NabeedAli_Lab04 nj;
//     cout << "Original array: \n";
//     nj.printArray(arr, size);

//     nj.bubbleSortModified(arr, size);

//     cout << "Sorted array: \n";
//     nj.printArray(arr, size);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to implement Bubble Sort
// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         // Perform a pass through the array
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap adjacent elements if they are in the wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // Helper function to print the array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     const int SIZE = 100;  // Define maximum size of static array
//     int arr[SIZE];         // Static array declaration
//     int n;                 // Actual size of the array to be entered by the user

//     // Taking the number of elements as input from the user
//     cout << "Enter the number of elements (max " << SIZE << "): ";
//     cin >> n;

//     // Input validation
//     if (n > SIZE || n <= 0) {
//         cout << "Invalid input size. Please enter a number between 1 and " << SIZE << "." << endl;
//         return 1;
//     }

//     // Taking array elements as input from the user
//     cout << "Enter " << n << " elements (0, 1, or 2):" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Print the original array
//     cout << "Original array: ";
//     printArray(arr, n);

//     // Sort the array using Bubble Sort
//     bubbleSort(arr, n);

//     // Print the sorted array
//     cout << "Sorted array: ";
//     printArray(arr, n);

//     return 0;
// }

// #include<iostream>
// #include<list>
// #include<algorithm>
// using namespace std;

// class NabeedAli_Lab04{
//     public:
//         void flip(int arr[], int n){
//             int i = 0;
//             int j = n-1;
//             while(i<j){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//                 i++;
//                 j--;
//             }
//         }

//         int find_largest(int arr[], int n){
//             int maxi = 0;
//             for (int i = 1; i < n; i++)
//             {
//                 if (arr[i] > arr[maxi])
//                 {
//                     maxi = i;
//                 }
//             }
//             return maxi;
//         }

//         list<int> pancakeSort(int arr[], int n){
//             list<int> result;
//             for (int i = n; i > 1; i--)
//             {
//                 int max_index = find_largest(arr,i);
//                 flip(arr, max_index);
//                 result.push_back(max_index+1);
//                 flip(arr, i-1);
//                 result.push_back(i);
//             }
//             return result;
//         }

// };
// int main() {
//     NabeedAli_Lab04 pc;
//     int arr[] = {3,2,4,1};
//     int n = int(sizeof(arr) / sizeof(arr[0]));
//     list<int> l = pc.pancakeSort(arr,n);
//     for(auto& a:l){
//         cout<<a<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// class NabeedAli_Lab04{
// public:
//     void flip(vector<int>& arr, int n){
//     int i = 0;
//     int j = n;
//     while(i < j){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
// }

//     int maximum(vector<int>& arr, int n){
//         int maxi = 0;
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > arr[maxi])
//             {
//                 maxi = i;
//             }
//         }
//         return maxi;
//     }

//     vector<int> pancakeSort(vector<int>& arr) {
//         vector<int> result;
//         int n = arr.size();
//         for (int i = n; i > 1; i--)
//         {
//             int max_index = maximum(arr, i);
//             flip(arr, max_index);
//             result.push_back(max_index + 1);
//             flip(arr, i-1);
//             result.push_back(i);
//         }
//         return result;
//     }
// };

// int main() {
//     NabeedAli_Lab04 pc;
//     vector <int> arr;
//     int n;
//     cout<<"Enter total numbers: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int num;
//         cout<<"Enter a num "<<i+1<<": ";
//         cin>>num;
//         arr.push_back(num);
//     }

//     vector<int> l = pc.pancakeSort(arr);

//     cout << "Flip sequence: ";
//     for(auto& a : l){
//         cout << a << " ";
//     }
//     cout << endl;
//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <string>
// using namespace std;

// class NabeedAli_Lab04{
// public:
//     int comparison, swap;

//     void bubblesort(int arr[], int n){
//         comparison = 0;
//         swap = 0;
//         bool flag = false;
//         for (int i = 0; i < n; i++){
//             flag = false;
//             for (int j = 0; j < n - i - 1; j++){
//                 comparison++;
//                 if (arr[j] > arr[j + 1]){
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp;
//                     flag = true;
//                     swap++;
//                 }
//             }
//             if (!flag)
//                 break; 
//         }
//         cout << "Total comparisons in Bubble sort: " << comparison << endl;
//         cout << "Total swaps in Bubble sort: " << swap << endl;
//     }

//     void selectionsort(int arr[], int n){
//         comparison = 0;
//         swap = 0;
//         for (int i = 0; i < n; i++){
//             int min = i;
//             for (int j = i + 1; j < n; j++){
//                 comparison++;
//                 if (arr[min] > arr[j]){
//                     min = j;
//                 }
//             }
//             int temp = arr[min];
//             arr[min] = arr[i];
//             arr[i] = temp;
//             swap++;
//         }
//         cout << "Total comparisons in Selection sort: " << comparison << endl;
//         cout << "Total swaps in Selection sort: " << swap << endl;
//     }

//     void insertionsort(int arr[], int n){
//         comparison = 0;
//         swap = 0;
//         for (int i = 1; i < n; i++){
//             int val = arr[i];
//             int hole = i;
//             while (hole > 0 && arr[hole - 1] > val){
//                 arr[hole] = arr[hole - 1];
//                 hole--;
//                 comparison++;
//                 swap++;
//             }
//             arr[hole] = val;
//             swap++;
//         }
//         cout << "Total comparisons in Insertion sort: " << comparison << endl;
//         cout << "Total swaps in Insertion sort: " << swap << endl;
//     }
// };

// void printArray(int arr[], int n){
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void copyArray(int source[], int destination[], int n){
//     for (int i = 0; i < n; i++){
//         destination[i] = source[i];
//     }
// }

// void compareSortingAlgorithms(int comparisons[], int swaps[], string names[]){
//     int bestComp = 0, worstComp = 0, bestSwap = 0, worstSwap = 0;

//     for (int i = 1; i < 3; i++){
//         if (comparisons[i] < comparisons[bestComp])
//             bestComp = i;
//         if (comparisons[i] > comparisons[worstComp])
//             worstComp = i;
//         if (swaps[i] < swaps[bestSwap])
//             bestSwap = i;
//         if (swaps[i] > swaps[worstSwap])
//             worstSwap = i;
//     }

//     cout << "Best algorithm in terms of comparisons: " << names[bestComp]
//          << " with " << comparisons[bestComp] << " comparisons." << endl;
//     cout << "Worst algorithm in terms of comparisons: " << names[worstComp]
//          << " with " << comparisons[worstComp] << " comparisons." << endl;

//     cout << "Best algorithm in terms of swaps: " << names[bestSwap]
//          << " with " << swaps[bestSwap] << " swaps." << endl;
//     cout << "Worst algorithm in terms of swaps: " << names[worstSwap]
//          << " with " << swaps[worstSwap] << " swaps." << endl;
// }

// int main(){
//     NabeedAli_Lab04 sort;
//     int n, range;

//     cout << "How many numbers do you want to enter: ";
//     cin >> n;
//     cout << "Enter the range: ";
//     cin >> range;

//     int arr[n], originalArr[n];

//     srand(time(0));
//     for (int i = 0; i < n; i++){
//         originalArr[i] = rand() % range;
//     }

//     int comparisons[3];
//     int swaps[3];
//     string names[3] = {"Bubble Sort", "Insertion Sort", "Selection Sort"};

//     int choice;
//     do{
//         copyArray(originalArr, arr, n);

//         cout << "1. Bubble Sort" << endl;
//         cout << "2. Insertion Sort" << endl;
//         cout << "3. Selection Sort" << endl;
//         cout << "4. Compare Sorting Algorithms (Best and Worst)" << endl;
//         cout << "5. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice){
//         case 1:{
//             sort.bubblesort(arr, n);
//             printArray(arr, n);
//             comparisons[0] = sort.comparison;
//             swaps[0] = sort.swap;
//             break;
//         }
//         case 2:{
//             sort.insertionsort(arr, n);
//             printArray(arr, n);
//             comparisons[1] = sort.comparison;
//             swaps[1] = sort.swap;
//             break;
//         }
//         case 3:{
//             sort.selectionsort(arr, n);
//             printArray(arr, n);
//             comparisons[2] = sort.comparison;
//             swaps[2] = sort.swap;
//             break;
//         }
//         case 4:{
//             compareSortingAlgorithms(comparisons, swaps, names);
//             break;
//         }
//         case 5:{
//             cout << "Exiting..." << endl;
//             break;
//         }
//         default:{
//             cout << "Invalid choice. Try again." << endl;
//         }
//         }
//     } while (choice != 5);
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

class NabeedAli_Lab_04{
    public:
        void bubbleSort(vector<int>& arr) {
            int n = arr.size();
            bool flag;
            for (int i = 0; i < n - 1; i++) {
                flag = false;
                for (int j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                        flag = true;
                    }
                }
                if (!flag)
                    break;
            }
        }

        void printArray(const vector<int>& arr) {
            for (int num : arr) {
                cout << num << " ";
            }
            cout << endl;
        }
};
int main() {
    NabeedAli_Lab_04 color;
    vector<int> arr;
    int n, input;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    cout << "Enter the numbers (0 for red, 1 for white, 2 for blue):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> input;
        arr.push_back(input);
    }

    cout << "Original array: ";
    color.printArray(arr);

    color.bubbleSort(arr);
    
    cout << "Sorted array: ";
    color.printArray(arr);

    return 0;
}
