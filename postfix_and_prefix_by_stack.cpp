// //Postfix

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int perform(char c, int o1, int o2)
{
    int r = 0;
    if (c == '+')
    {
        r = o1 + o2;
    }
    else if (c == '-')
    {
        r = o1 - o2;
    }
    else if (c == '*')
    {
        r = o1 * o2;
    }
    else if (c == '/')
    {
        r = o1 / o2;
    }
    else if (c == '%')
    {
        r = o1 % o2;
    }

    return r;
}
int evaluatepostfix(string s)
{
    stack<int> S;
    int ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            S.push((int(s[i]) - int('0')));
        }
        else if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '%')
        {
            int opr2 = S.top();
            S.pop();
            if (S.empty())
            {
                cout << "Error.." << endl;
                return -1;
            }

            int opr1 = S.top();
            S.pop();
            if (!S.empty())
            {
                cout << "Error.." << endl;
                return -1;
            }

            ans = perform(s[i], opr1, opr2);
            S.push(ans);
        }
    }
    return S.top();
}
int main()
{
    string s;
    cout << "Enter a phrase: ";
    cin >> s;
    int result = evaluatepostfix(s);
    cout << "The result is: " << result << endl;
    return 0;
}

// //Prefix
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int perform(char c, int o1, int o2)
// {
//     int r = 0;
//     if (c == '+')
//     {
//         r = o1 + o2;
//     }
//     else if (c == '-')
//     {
//         r = o1 - o2;
//     }
//     else if (c == '*')
//     {
//         r = o1 * o2;
//     }
//     else if (c == '/')
//     {
//         r = o1 / o2;
//     }
//     else if (c == '%')
//     {
//         r = o1 % o2;
//     }

//     return r;
// }
// int evaluatepostfix(string s)
// {
//     stack<int> S;
//     int ans;
//     for (int i = s.length()-1; i >= 0; i--)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             S.push((int(s[i]) - int('0')));
//         }
//         else if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '%')
//         {
//             int opr1 = S.top();
//             S.pop();
//             int opr2 = S.top();
//             S.pop();
//             ans = perform(s[i], opr1, opr2);
//             S.push(ans);
//         }
//     }
//     return S.top();
// }
// int main()
// {
//     string s;
//     cout << "Enter a phrase: ";
//     cin >> s;
//     int result = evaluatepostfix(s);
//     cout << "The result is: " << result << endl;
//     return 0;
// }