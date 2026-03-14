// by LIFECOULDBEDREAM
// 2026/03/14 01:26

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("mex.in", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> _v(n + 2, 0), _forward(n + 2, n + 1), _backward(n + 2, n + 1);
        for (ll i = 1; i <= n; i++)
            cin >> _v[i];
        for (ll i = 1; i <= n; i++)
            _forward[i] = min(_forward[i - 1], _v[i]);
        for (ll i = n; i > 0; i--)
            _backward[i] = min(_backward[i + 1], _v[i]);
        ll l, r;
        while (q--)
        {

            cin >> l >> r;
            cout << min(_backward[r + 1], _forward[l - 1]) << '\n';
        }
    }

    return 0;
}