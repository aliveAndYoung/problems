// by LIFECOULDBEDREAM
// 2026/06/06 04:48

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    int l = 0, r = 0, sum = 0, ans = 0x7ffffffffffff;
    while (l <= r)
    {
        if (sum < m && r < n)
            sum = sum + _v[r], r++;
        else if (sum >= m && l < n)
            ans = min(ans, r - l), sum = sum - _v[l], l++;
        else
            l++;
    }
    if (ans == 0x7ffffffffffff)
        cout << -1;
    else
        cout << ans;
    return 0;
}