// by LIFECOULDBEDREAM
// 2026/06/14 04:28

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _a(n), _b(m);
    for (int i = 0; i < n; i++)
        cin >> _a[i];
    for (int i = 0; i < m; i++)
        cin >> _b[i];
    int l, r, mid, c, d, e = 1e10, f;
    l = -1e10;
    r = 1e10;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        bool inc = false;
        for (int i = 0; i < n; i++)
        {
            c = _a[i];
            c = c - mid;
            d = lower_bound(_b.begin(), _b.end(), c) == _b.end() ? (1e10 + 1) : *lower_bound(_b.begin(), _b.end(), c);
            if (d == 1e10 + 1 || (d > _a[i] + mid))
                inc = true;
        }
        if (inc)
            l = mid + 1;
        else
            r = mid - 1, e = min(e, mid);
    }
    cout << e;

    return 0;
}