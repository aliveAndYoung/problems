// by LIFECOULDBEDREAM
// 2026/07/31 17:11

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, b, ans = 0, div, sub;
        cin >> n >> m >> a >> b;
        while (n > m)
        {
            if (n / 2 < m)
            {
                ans = ans + (n - m) * b;
                n = m;
                continue;
            }
            sub = (n - m) * b;
            if (sub < a)
                ans = ans + sub, n = m;
            else
                ans = ans + a,
                n = n / 2;
        }
        cout << ans << '\n';
    }

    return 0;
}