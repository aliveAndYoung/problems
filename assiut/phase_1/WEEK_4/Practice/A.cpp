// by LIFECOULDBEDREAM
// 2026/06/06 12:51

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    int l = 0, r = 0, sum = 0, ans = -1;
    for (int i = 0; r < n; r++)
    {
        sum = sum + _v[r];
        while (sum > t)
            sum = sum - _v[l], l++;
        ans = max(ans, r - l + 1);
    }

    cout << ans;
    return 0;
}