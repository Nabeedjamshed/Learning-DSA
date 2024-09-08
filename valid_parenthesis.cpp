#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool check(char open, char close){
    if (open == '(' && close == ')')
    {
        return true;
    }
    else if (open == '{' && close == '}')
    {
        return true;
    }
    else if (open == '[' && close == ']')
    {
        return true;
    }
    else{
        return false;
    }

}
bool arebracketsvalid(string s){
    stack <char> S;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            S.push(s[i]);
        }
        else if(s[i] == '}' || s[i] == ')' || s[i] == ']')
        {
            if (S.empty() || !check(S.top(), s[i])){
                return false;
            }
            S.pop();
        }
    }
    if (S.empty())
    {
        return true;
    } else {
        return false;
    }

}
int main() {
    string s;
    cout<<"Enter brackets: ";
    cin>>s;
    if(arebracketsvalid(s)){
        cout<<"Balance. ";
    } else {
        cout<<"Unbalanced. ";
    }
    return 0;
}