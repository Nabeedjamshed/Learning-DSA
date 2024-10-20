
// #include <iostream>
// using namespace std;

// int count = 0;
// void TowerofHanoi(int n, int source, int helper, int destination)
// {
//     if (n == 1)
//     {
//         cout << "Move disk " << n << " from Tower " << source << " (Source) to Tower " << destination << " (Destination)" << endl;
//         count++;
//         return;
//     }

//     TowerofHanoi(n - 1, source, destination, helper);

//     cout << "Move disk " << n << " from Tower " << source << " (Source) to Tower " << destination << " (Destination)" << endl;
//     count++;
//     TowerofHanoi(n - 1, helper, source, destination);
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of disks: ";
//     cin >> n;

//     cout << "Tower 1: Source" << endl;
//     cout << "Tower 2: Helper" << endl;
//     cout << "Tower 3: Destination" << endl;
//     cout << endl;
//     TowerofHanoi(n, 1, 2, 3);
//     cout << endl;
//     cout << "Total moves: " << count << endl;

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n, vector <int> &dp){
    if (n<=1)
    {
        return n;
    } if (dp[n] != -1)
    {
        return dp[n];
    } else {
        int a = fibonacci(n-1, dp) + fibonacci(n-2, dp);
        dp[n] = a;
        return a;
    }  
}
int main() {
    int n;
    cin>>n;
    vector <int> dp(n+1, -1);
    vector <int> l;
    for (int i = 0; i < n; i++)
    {
        l.push_back(fibonacci(i, dp));
    }
    for(auto a:l){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
