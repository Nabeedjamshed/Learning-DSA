// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int findLHS(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     int max_count = 0;
//     for(int i=0; i<nums.size(); i++){
//         int max = nums[nums.size()-1-i];
//         int count = 0;
//         for(int j = 0; j < nums.size(); j++){
//             if(max - nums[j] == 1){
//                 count+=nums.size()-1-i-j+1;
//                 break;
//             }
//         }
//         if (max_count < count){
//             max_count = count;
//         }
//     }
//     return max_count; 
//     }
// int main(){
//     vector <int> l;
//     int n;
//     cout<<"Enter total numbers: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int n1;
//         cout<<"Enter number "<<i+1<<": ";
//         cin>>n1;
//         l.push_back(n1);
//     }
// 	int res = findLHS(l);
//     cout<<"Output: "<<res<<endl;
// 	return 0;
// }


// #include <iostream>
// #include <stack>
// using namespace std;

// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;

//     for (int j = low; j < high; j++) {
//         if (arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSortIterative(int arr[], int n) {
//     stack<pair<int, int>> stk;
//     stk.push({0, n - 1});

//     while (!stk.empty()) {
//         int low = stk.top().first;
//         int high = stk.top().second;
//         stk.pop();
//         int pivot = partition(arr, low, high);
//         if (pivot - 1 > low) {
//             stk.push({low, pivot - 1});
//         }
//         if (pivot + 1 < high) {
//             stk.push({pivot + 1, high});
//         }
//     }
// }

// int main() {
//     int arr[] = {5, 1, 8, 3, 9, 7, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSortIterative(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <climits> 
// using namespace std;

// void merge(int arr[], int p, int q, int r) {
//     int n1 = q - p + 1;
//     int n2 = r - q;
//     int left[n1 + 1];
//     int right[n2 + 1];
    
//     for (int i = 0; i < n1; i++)
//     {
//         left[i] = arr[p + i];
//     }
//     for (int j = 0; j < n2; j++)
//     {
//         right[j] = arr[q + 1 + j];
//     }
//     left[n1] = INT_MAX; 
//     right[n2] = INT_MAX;  
    
//     int i = 0, j = 0;
//     for (int k = p; k <= r; k++)
//     {
//         if (left[i] <= right[j])
//         {
//             arr[k] = left[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = right[j];
//             j++;
//         }
//     }
// }

// void mergeSortIterative(int arr[], int n) {
//     for (int curr_size = 1; curr_size < n; curr_size *= 2) {
//         for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {
//             int mid = min(left_start + curr_size - 1, n - 1);
//             int right_end = min(left_start + 2 * curr_size - 1, n - 1);
//             merge(arr, left_start, mid, right_end);
//         }
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     mergeSortIterative(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

bool carPooling(vector<vector<int>>& trips, int carCapacity) {
    int maxDropOff = 0; 
    for (auto& trip : trips) {
        maxDropOff = max(maxDropOff, trip[2]);
    }

    vector<int> passengerCountAtLocation(maxDropOff + 1, 0);

    for (auto& trip : trips) {
        int passengers = trip[0];
        int pickUpLocation = trip[1];
        int dropOffLocation = trip[2];
        
        passengerCountAtLocation[pickUpLocation] += passengers;  
        passengerCountAtLocation[dropOffLocation] -= passengers; 
    }

    int currentPassengerCount = 0;
    for (int i = 0; i <= maxDropOff; i++) {
        currentPassengerCount += passengerCountAtLocation[i];
        if (currentPassengerCount > carCapacity) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int carCapacity, numTrips;

    cout << "Enter the car's capacity: ";
    cin >> carCapacity;

    cout << "Enter the number of trips: ";
    cin >> numTrips;

    vector<vector<int>> trips(numTrips, vector<int>(3));

    for (int i = 0; i < numTrips; i++) {
        cout << "Enter the number of passengers " << i + 1 << ": ";
        cin >> trips[i][0] >> trips[i][1] >> trips[i][2];
    }

    if (carPooling(trips, carCapacity)) {
        cout << "True" << endl; 
    } else {
        cout << "False" << endl; 
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// void mergeIntervals(vector<vector<int>> intervals , int n)
// {
//     int index = 0;
//     vector<vector<int>> mergedIntervals;

//     while (index < n)
//     {
//         if (mergedIntervals.empty())
//         {
//             mergedIntervals.push_back(intervals[index]);
//             index++;
//         }
//         else
//         {
//             vector<int> lastInterval = mergedIntervals[mergedIntervals.size() - 1];

//             while (index < n && intervals[index][0] <= lastInterval[1])
//             {
//                 int start = lastInterval[0];
//                 int end = max(lastInterval[1], intervals[index][1]); 

//                 mergedIntervals.pop_back(); 
//                 mergedIntervals.push_back({start, end}); 

//                 lastInterval = mergedIntervals[mergedIntervals.size() - 1];
//                 index++;
//             }

//             if (!mergedIntervals.empty() && index < n)
//             {
//                 mergedIntervals.push_back(intervals[index]);
//                 index++;
//             }
//         }
//     }

//     cout << "[";
//     for (auto i = 0; i < mergedIntervals.size(); i++) {
//         cout << "[" << mergedIntervals[i][0] << "," << mergedIntervals[i][1] << "]";
//         if (i < mergedIntervals.size() - 1) {
//             cout << ","; 
//         }
//     }
//     cout << "]" << endl;
// }

// int main()
// {
//     vector<vector<int>> intervals1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
//     vector<vector<int>> intervals2 = {{1, 4}, {4, 5}};
//     int n1 = intervals1.size();
//     int n2 = intervals2.size();
//     cout<<"Output 1"<<endl;
//     mergeIntervals(intervals1, n1);
//     cout<<endl;
//     cout<<"Output 2"<<endl;
//     mergeIntervals(intervals2, n2);
//     return 0;
// }
