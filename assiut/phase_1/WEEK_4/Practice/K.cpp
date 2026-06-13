// by LIFECOULDBEDREAM
// 2026/06/13 21:53

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s;
    cin >> n >> s;
    vector<int> _v(n + 1), __v;
    for (int i = 1; i <= n; i++)
        cin >> _v[i];
    int l, r, mid, a, b, ans1 = 0, ans2 = 0;
    l = 1;
    r = n;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        __v = _v;
        for (int i = 0; i <= n; i++)
            __v[i] = __v[i] + (mid * i);
        sort(__v.begin(), __v.end());
        a = 0;
        for (int i = 1; i <= mid; i++)
            a = a + __v[i];
        if (a <= s)
        {
            l = mid + 1;
            if (mid > ans1)
                ans1 = mid, ans2 = a;
        }
        else
            r = mid - 1;
    }
    cout << ans1 << " " << ans2;
    return 0;
}