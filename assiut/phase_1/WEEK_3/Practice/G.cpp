// by LIFECOULDBEDREAM
// 2026/05/28 13:27

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> _mp;
        ll ans = (n * (n - 1)) / 2;
        bool flag = false;
        ll curr;
        for (ll i = 0; i < n; i++)
        {
            cin >> curr;
            _mp[curr]++;
        }
        for (auto _it = _mp.begin(); _it != _mp.end(); _it++)
        {
            curr = _it->second;
            if (curr > 1)
            {
                flag = true;
                ans = ans - (curr * (curr - 1)) / 2;
            }
        }
        if (flag)
            ans++;
        cout << ans << '\n';
    }

    return 0;
}