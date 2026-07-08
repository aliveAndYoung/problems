// by LIFECOULDBEDREAM
// 2026/07/08 09:06

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    int x, y;
    int k;
    cin >> n >> m >> x >> y >> k;
    int vecx, vecy, l, r, mid, count, ans = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> vecx >> vecy;
        l = 0;
        r = 1e9;
        count = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (((mid * vecx) + x) > n || ((mid * vecy) + y) > m || ((mid * vecx) + x) < 1 || ((mid * vecy) + y) < 1)
                r = mid - 1;
            else
                count = max(count, mid), l = mid + 1;
        }
        ans = ans + count;
        x = x + (count * vecx);
        y = y + (count * vecy);
    }
    cout << ans;
    return 0;
}