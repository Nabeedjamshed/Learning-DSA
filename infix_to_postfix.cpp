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

    int main()
    {
        string exp;
        cout << "Enter an infix expression: ";
        cin >> exp;
        string result = infixtopostfix(exp);
        cout << "Postfix expression is: " << result << endl;
        return 0;
    }