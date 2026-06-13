// by LIFECOULDBEDREAM
// 2026/06/13 18:28

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<double> _v(n);

    int summ = 0;
    for (int i = 0; i < n; i++)
        cin >> _v[i], summ = summ + _v[i];
    double l, r, mid, a, b, ans;
    l = 0;
    r = double(summ) / double(n);
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        a = 0;
        b = 0;
        for (int i = 0; i < n; i++)
        {
            if (_v[i] > mid)
                a = a + (_v[i] - mid);
            else if (_v[i] < mid)
                b = b + (mid - _v[i]);
        }
        a = a - (a * (double(k) / 100));
        if (a >= b)
            l = mid + 1e-7, ans = max(ans, mid);
        else
            r = mid - 1e-7;
    }
    cout << fixed<<setprecision(9) << ans;
    return 0;
}