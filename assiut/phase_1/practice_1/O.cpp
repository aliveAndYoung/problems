// by LIFECOULDBEDREAM
// 2026/03/11 20:13

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    vector<ll> _v(2 * (1e6) + 1, 0);
    ll curr;
    for (ll i = 0; i < n; i++)
    {
        cin >> curr;
        _v[curr + 1e6]++;
    }
    ll ans = 0;
    k = k + (2 * (1e6));
    for (ll i = 0; i < _v.size(); i++)
        if (_v[i] && k - i < _v.size() && k - i >= 0)
            if (i == k - i)
                ans = ans + (_v[i] * (_v[i] - 1));
            else
                ans = ans + (_v[i] * _v[k - i]);

    cout << ans / 2;
    return 0;
}