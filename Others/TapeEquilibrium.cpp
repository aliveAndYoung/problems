#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    for (int i = 1; i < int(A.size()); i++)
        A[i] += A[i - 1];
    int minDiff = 1e9;
    for (int r = 1; r < int(A.size() - (A.size()!=2)); r++)
        minDiff = min(minDiff, abs((A[A.size() - 1] - A[r - 1]) - A[r - 1]));
    return minDiff;
}