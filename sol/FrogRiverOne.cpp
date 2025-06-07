#include <bits/stdc++.h>
using namespace std;

int solution(int X, vector<int> &A)
{
    int steps = X, time = -1;
    vector<bool> vec(X, false);
    for (int i = 0; i < A.size(); i++)
    {
        if (vec[A[i] - 1] == false)
        {
            steps--;
            vec[A[i] - 1] = true;
        };
        if (steps == 0)
            time = i + 1;
    }
    return time;
}