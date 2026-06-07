// by LIFECOULDBEDREAM
// 2026/06/07 00:07

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
    vector<int> _v(n), _a, _b;
    set<int> _s;
    for (int i = 0; i < n; i++)
        cin >> _v[i], _s.insert(_v[i]);
    int minn, maxx;
    minn = *_s.begin();
    maxx = *_s.rbegin();
    if (maxx == minn)
    {
        cout << 0;
        return 0;
    }
    // cout << minn << maxx;
    for (int i = 0; i < n; i++)
    {
        if (_v[i] == maxx)
            _a.push_back(i);
        if (_v[i] == minn)
            _b.push_back(i);
    }
    int ans = n;

    for (int i = 0; i < n; i++)
    {
        int a = lower_bound(_a.begin(), _a.end(), i) - _a.begin();
        if (a == _a.size())
            a--;
        int b = lower_bound(_b.begin(), _b.end(), i) - _b.begin();
        if (b == _b.size())
            b--;
        if (a - 1 >= 0 && abs(_a[a - 1] - i) < abs(_a[a] - i))
            a--;
        if (b - 1 >= 0 && abs(_b[b - 1] - i) < abs(_b[b] - i))
            b--;
        ans = min(ans, abs(_a[a] - _b[b]));
    }
    cout << ans;

    return 0;
}