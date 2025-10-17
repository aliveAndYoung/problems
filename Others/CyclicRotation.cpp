#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &A, int K)
{
    int l = A.size();
    vector<int> myCopy(l, 0);
    for (int i = 0; i < l; i++)
        myCopy[i] = A[(i - (K % l) + l) % l];
    return myCopy;
};