// by LIFECOULDBEDREAM
// 2025/11/29 15:41

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k)
{
    int andd, orr, xorr;
    andd = orr = xorr = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((i & j) < k && (i & j) > andd)
                andd = i & j;
            if ((i | j) < k && (i | j) > orr)
                orr = i | j;
            if ((i ^ j) < k && (i ^ j) > xorr)
                xorr = i ^ j;
        }
    }
    cout << andd << "\n"
         << orr << "\n"
         << xorr;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    solve(n, k);

    return 0;
}