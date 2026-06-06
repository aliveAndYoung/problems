// by LIFECOULDBEDREAM
// 2026/06/06 16:47

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
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    int l = 1, r = 1e18, mid, a, b, ans = 0x7fffffffffffffff;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        a = 0;
        b = mid;
        for (int i = 0; i < n; i++)
        {
            if (_v[i] <= b)
                a++, i++, b--;
        }
        if (a >= k)
            ans = min(ans, mid), r = mid - 1;
        else
            l = mid + 1;
    }
    if (ans == 0x7fffffffffffffff)
        cout << -1;
    else
        cout << ans;
    return 0;
}