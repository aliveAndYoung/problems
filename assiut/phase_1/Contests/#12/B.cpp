// by LIFECOULDBEDREAM
// 2026/07/09 09:10

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
    map<int, int> _mp;
    int curr, ans = 0, count = 0, l = 0, ansl, ansr;
    for (int r = 0; r < n; r++)
    {
        if (_mp[_v[r]] == 0)
            count++;
        _mp[_v[r]]++;
        while (count > k && l <= r)
        {
            if (_mp[_v[l]] == 1)
                count--;
            _mp[_v[l]]--;
            l++;
        }
        if (r - l + 1 > ans)
        {
            ansl = l, ansr = r;
            ans = r - l + 1;
        }
    }
    cout << ansl + 1 << ' ' << ansr + 1;
    return 0;
}