#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long findBestGroup(long long popularity, vector<vector<long long>> groups)
{
    long long bestGroup, currGroup = 0, bestDiff = LONG_LONG_MAX;
    for (vector<long long> group : groups)
    {
        long long currDiff = 0;
        currGroup++;
        for (long long a : group)
        {
            currDiff += abs(popularity - a);
        }
        if (currDiff < bestDiff)
        {
            bestDiff = currDiff;
            bestGroup = currGroup;
        }
    }
    return bestGroup;
}

int main()
{
    long long n;
    cin >> n;
    vector<vector<long long>> v(n);
    for (long long i = 0; i < n; i++)
    {
        long long m;
        cin >> m;
        for (long long j = 0; j < m; j++)
        {
            long long x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    long long qs;
    cin >> qs;
    vector<long long> q(qs);
    for (long long i = 0; i < qs; i++)
    {
        cin >> q[i];
    }
    for (long long query : q)
    {
        cout << findBestGroup(query, v) << " ";
    }

    return 0;
}