// by LIFECOULDBEDREAM
// 2026/06/06 23:08

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<char> _v(n);
    set<char> _s;
    map<char, int> _mp;
    for (int i = 0; i < n; i++)
        cin >> _v[i], _s.insert(_v[i]);
    int l = 0, count = 0, ans = n;
    for (int r = 0; r < n; r++)
    {
        _mp[_v[r]]++;
        if (_mp[_v[r]] == 1)
            count++;
        while (count == _s.size())
        {
            ans = min(ans, r - l + 1);
            _mp[_v[l]]--;
            if (_mp[_v[l]] == 0)
                count--;
            l++;
        }
    }
    cout << ans;

    return 0;
}