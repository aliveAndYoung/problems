// by LIFECOULDBEDREAM
// 2026/06/06 13:32

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

    int curr;
    while (t--)
    {
        cin >> curr;
        int l = 1, r = 1e10, mid, ans = 0x7ffffffffffffff, a;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            a = mid * (mid + 1) / 2;
            if (a < curr)
                l = mid + 1;
            else
                ans = min(ans, mid), r = mid - 1;
        }
        cout << ans << '\n';
    }

    return 0;
}