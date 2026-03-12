// by LIFECOULDBEDREAM
// 2026/03/12 01:07

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int curr;

    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        curr = curr % k;
        mp[curr]++;
    }

    long long ans = 0;
    for (int it = 0; it < k; it++)
    {
        if (mp[it] && mp[(k - it) % k])
        {
            curr = min(mp[it], mp[(k - it) % k]);
            if (it == (k - it) % k)
                curr = curr / 2;
            ans = ans + curr;
            mp[it] = mp[it] - curr;
            mp[(k - it) % k] = mp[(k - it) % k] - curr;
        }
    }
    cout << 2 * ans;

    return 0;
}