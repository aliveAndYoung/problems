#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solution(vector<int> &A, vector<int> &B)
{
    stack<pair<ll, int>> myStack;
    for (int i = 0; i < int(B.size()); i++)
    {
        if (B[i] == 0)
        {
            while (!myStack.empty() && myStack.top().second == 1 && myStack.top().first < A[i])
                myStack.pop();
            if (!myStack.empty() && myStack.top().second == 1 && myStack.top().first > A[i])
                continue;
        }
        myStack.push({A[i], B[i]});
    }
    return int(myStack.size());
};