// by LIFECOULDBEDREAM
// 2026/07/24 22:49

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
        int a, b, l, r;
        cin >> a >> b >> l >> r;
        bool flag = false;
        for (int i = 0; i < 31; i++)
            if (((1ll << i) & b) && !((1ll << i) & a))
                flag = 1;
        if (flag)
        {
            cout << "NO\n";
        }
        else
        {
        }
    }

    return 0;
}