#include <iostream>
#include <vector>
using namespace std;

void firstopr(vector<int> A, vector<int> B, int x, int y)
{
    vector<int> res;
    for (int i = 0; i < A.size(); i++)
    {
        res.push_back(x * A[i] + y * B[i]);
    }
    cout << "XA + YB = ";
    for (auto &a : res)
    {
        cout << a << " ";
    }
    cout << endl;
}
void secondopr(vector<int> A, vector<int> B)
{
    int res = 0;
    for (int i = 0; i < A.size(); i++)
    {
        res += A[i] * B[i];
    }
    cout << "A.B = " << res << endl;
}
int main()
{
    vector<int> A;
    vector<int> B;
    int a1, b1, X, Y;
    cout << "How many numbers do you want to enter in Vector A?" << endl;
    cin >> a1;
    for (int i = 0; i < a1; i++)
    {
        int n1;
        cout << "Enter numbers: ";
        cin >> n1;
        A.push_back(n1);
    }
    cout << "How many numbers do you want to enter in Vector B?" << endl;
    cin >> b1;
    if (a1 != b1)
    {
        cout << "Vectors A and B must be of the same size." << endl;
    }
    else
    {
        for (int i = 0; i < b1; i++)
        {
            int n2;
            cout << "Enter numbers: ";
            cin >> n2;
            B.push_back(n2);
        }

        cout << "Enter a value of X: ";
        cin >> X;
        cout << "Enter a value of Y: ";
        cin >> Y;
        cout << endl;
        firstopr(A, B, X, Y);
        secondopr(A, B);
    }
    return 0;
}