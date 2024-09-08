#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int precedence(char ch)
{
    if (ch == '/' || ch == '*')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
string infixtopostfix(string exp)
{
    stack<char> S;
    string res = "";
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(')
        {
            S.push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            while (!S.empty() && S.top() != '(')
            {
                char c = S.top();
                S.pop();
                res += c;
            }
            S.pop();
        }
        else if (!isOperator(exp[i]))
        {
            res += exp[i];
        }
        else
        {
            while (!S.empty() && precedence(exp[i]) <= precedence(S.top()))
            {
                char c = S.top();
                S.pop();
                res += c;
            }
            S.push(exp[i]);
        }
    }
    while (!S.empty())
    {
        char c = S.top();
        S.pop();
        res += c;
    }
    return res;
}

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
    string exp;
    cout << "Enter an infix expression: ";
    cin >> exp;
    string result = infixtopostfix(exp);
    cout << "Postfix expression is: " << result << endl;
    int result1 = evaluatepostfix(result);
    cout << "The result is: " << result1 << endl;
    return 0;
}