// by LIFECOULDBEDREAM
// 2026/07/14 18:11

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
        int n, x, y;
        cin >> n >> x >> y;
        int curr, step = __gcd(x, y);
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> curr;
            if (i % step != curr % step)
                flag = 1;
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}