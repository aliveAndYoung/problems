// by LIFECOULDBEDREAM
// 2026/06/16 04:29

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> _v;
    for (int i = 1; i <= 50000; i++)
        _v.push_back((i * (i + 1)) / 2);
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = 0; i < _v.size(); i++)
            for (int j = i; j < _v.size(); j++)
                if (_v[i] + _v[j] >= l && _v[i] + _v[j] <= r)
                    count++;
        cout << count << '\n';
    }
    return 0;
}