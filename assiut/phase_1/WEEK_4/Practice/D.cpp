// by LIFECOULDBEDREAM
// 2026/06/06 16:04

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
    int l = 1, r = n, mid, ans = n + 1, a, b;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        a = mid;
        b = 0;
        while (a)
            b = b + a, a = a / k;
        if (b >= n)
            ans = min(ans, mid), r = mid - 1;
        else
            l = mid + 1;
    }
    cout << ans;

    return 0;
}