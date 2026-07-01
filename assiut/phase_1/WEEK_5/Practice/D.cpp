// by LIFECOULDBEDREAM
// 2026/07/01 09:01

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r, l, x, a = 0, b = 0, minn, maxx;
    cin >> n >> l >> r >> x;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    int mask = 0;
    while (mask < (1 << n))
    {
        a = 0;
        minn = 1e7;
        maxx = -1;
        for (int i = 0; i < n; i++)
            if (mask & (1 << i))
                a = a + _v[i], minn = min(minn, _v[i]), maxx = max(maxx, _v[i]);
        if (a <= r && a >= l && maxx - minn >= x)
            b++;
        mask++;
    }
    cout << b;
    return 0;
}