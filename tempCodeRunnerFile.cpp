#include <iostream>
#include <vector>
using namespace std;

int fabonacci(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        return dp[n] = fabonacci(n - 2, dp) + fabonacci(n - 1, dp);
    }
}
int main()
{
    int n;
    cout << "Enter num: ";
    cin >> n;
    vector<int> dp(n + 1, -1);
    vector<int> l;
    for (int i = 0; i <= n; i++)
    {
        l.push_back(fabonacci(i, dp));
    }

    for (auto a : l)
    {
        cout << a << " ";
    }
    return 0;
}