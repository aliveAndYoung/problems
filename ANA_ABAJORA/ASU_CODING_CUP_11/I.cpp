// by LIFECOULDBEDREAM
// 2026/06/19 20:12

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    map<string, int> _mp;
    while (n--)
    {
        cin >> s;
        _mp[s]++;
    }
    int count = -1;
    for (auto it = _mp.begin(); it != _mp.end(); it++)
    {
        if (it->second > count)
        {
            count = it->second;
            s = it->first;
        }
    }

    cout << s;
    return 0;
}