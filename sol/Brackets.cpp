#include <bits/stdc++.h>
using namespace std;
int solution(string &S)
{
    stack<char> myStack;
    set<char> openings = {'(', '[', '{'};
    map<char, char> closures = {
        {'(', ')'}, {'[', ']'}, {'{', '}'}};
    for (char curr : S)
    {
        if (openings.count(curr))
            myStack.push(curr);
        else
        {
            if (myStack.empty())
                return 0;
            if (closures[myStack.top()] != curr)
                return 0;
            myStack.pop();
        }
    }
    if (myStack.empty())
        return 1;
    return 0;
};