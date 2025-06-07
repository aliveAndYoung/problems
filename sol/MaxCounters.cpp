#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int N, vector<int> &A)
{
    vector<int> counters(N, 0);
    int maxx = 0;
    bool isMaxed = false;
    for (int curr : A)
    {
        if (curr == N + 1)
        {
            if (isMaxed)
                continue;

            counters.assign(N, maxx);
            isMaxed = true;
        }
        else
        {
            counters[curr - 1]++;
            maxx = max(maxx, counters[curr - 1]);
            isMaxed = false;
        }
    }
    return counters;
}