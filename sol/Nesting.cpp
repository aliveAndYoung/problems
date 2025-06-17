#include <bits/stdc++.h>
using namespace std;
int solution(string &S)
{
    stack<char> myStack;
    for (char curr : S)
    {
        if (curr == '(')
            myStack.push(curr);
        if (curr == ')')
        {
            if (myStack.empty())
                return 0;
            myStack.pop();
        }
    }
    if (myStack.empty())
        return 1;
    return 0;
};