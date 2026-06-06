// by LIFECOULDBEDREAM
// 2026/06/06 05:11

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
    vector<char> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    map<char, int> _mp;
    set<char> _s;
    for (int i = 0; i < k; i++)
        _s.insert(_v[i]), _mp[_v[i]]++;
    int ans = _s.size();
    for (int i = k; i < n; i++)
    {
        _s.insert(_v[i]);
        _mp[_v[i]]++;
        _mp[_v[i - k]]--;
        if (_mp[_v[i - k]] == 0)
            _s.erase(_v[i - k]);
        ans = max(ans, ll(_s.size()));
    }
    cout << ans;
    return 0;
}