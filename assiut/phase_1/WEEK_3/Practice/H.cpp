// by LIFECOULDBEDREAM
// 2026/05/28 15:03

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;

    map<string, ll> _mp;
    vector<string> _v(n + 1);
    string curr;
    for (ll i = 1; i <= n; i++)
    {
        cin >> _v[i];
    }

    ll ww;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ww;
        _mp[_v[i]] = ww;
    }

    ll c1, c2, minn = 0x7fffffff;
    stack<ll> _s;
    for (ll i = 0; i < m; i++)
    {
        cin >> c1;
        for (ll j = 0; j < c1; j++)
        {
            cin >> c2;
            _s.push(c2);
            minn = min(minn, _mp[_v[c2]]);
        }
        while (!_s.empty())
        {
            _mp[_v[_s.top()]] = minn;
            _s.pop();
        }
        minn = 0x7fffffff;
    }

    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        cin >> curr;
        ans += _mp[curr];
    }

    cout << ans << '\n';

    return 0;
}