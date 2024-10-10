// ?

// // // #include <iostream>
// // // using namespace std;

// // // int count = 0;
// // // void TowerofHanoi(int n, int source, int helper, int destination)
// // // {
// // //     if (n == 1)
// // //     {
// // //         cout << "Move disk " << n << " from Tower " << source << " (Source) to Tower " << destination << " (Destination)" << endl;
// // //         count++;
// // //         return;
// // //     }

// // //     TowerofHanoi(n - 1, source, destination, helper);

// // //     cout << "Move disk " << n << " from Tower " << source << " (Source) to Tower " << destination << " (Destination)" << endl;
// // //     count++;
// // //     TowerofHanoi(n - 1, helper, source, destination);
// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cout << "Enter the number of disks: ";
// // //     cin >> n;

// // //     cout << "Tower 1: Source" << endl;
// // //     cout << "Tower 2: Helper" << endl;
// // //     cout << "Tower 3: Destination" << endl;
// // //     cout << endl;
// // //     TowerofHanoi(n, 1, 2, 3);
// // //     cout << endl;
// // //     cout << "Total moves: " << count << endl;

// // //     return 0;
// // // }


function optimizedFibonacciNumber(n, memo):

    if n <= 1:
        return n

     // Initially, memo array is filled with -1 indicating values are not computed yet
    if memo[n] is not -1:   
        return memo[n]

    memo[n] = optimizedFibonacciNumber(n - 1, memo) + optimizedFibonacciNumber(n - 2, memo)
    return memo[n]
    
end function


