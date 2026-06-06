// by LIFECOULDBEDREAM
// 2026/06/06 23:43

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
    vector<int> _v(n), _v1(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    sort(_v.begin(), _v.end());
    _v1 = _v;
    for (int i = 1; i < n; i++)
        _v1[i] = _v1[i] + _v1[i - 1];
    int t;
    cin >> t;
    while (t--)
    {
        int a, b = -1;
        cin >> a;
        int l = 0, r = n - 1, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (_v[mid] > a)
                r = mid - 1;
            else
                l = mid + 1, b = max(b, mid);
        }
        if (b == -1)
            cout << -1 << '\n';
        else
            cout << b + 1 << ' ' << _v1[b] << '\n';
    }

    return 0;
}