#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    vector<int> vec(100001, 0);
    for (int curr : A)
        if (curr > 0 && curr < 100001)
            vec[curr - 1]++;
    for (int i = 1; i <= 100001; i++)
    {
        if (!vec[i])
            return i+1;
    }

    return 100001;
}