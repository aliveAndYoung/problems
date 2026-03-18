// by LIFECOULDBEDREAM
// 2026/03/17 20:02

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> _v(n + 2, 0), _l(n + 2, 0), _r(n + 2, 0);
    for (ll i = 1; i <= n; i++)
        cin >> _v[i];
    for (ll i = 1; i <= n; i++)
        _l[i] = max(_l[i - 1], _v[i]);
    for (ll i = n; i > 0; i--)
        _r[i] = max(_r[i + 1], _v[i]);
    for (ll i = 1; i <= n; i++)
    {
        if (_v[i] >= _l[i] && _v[i] >= _r[i])
            cout << "both" << '\n';
        else if (_v[i] >= _l[i] && _v[i] < _r[i])
            cout << "left" << '\n';
        else if (_v[i] < _l[i] && _v[i] >= _r[i])
            cout << "right" << '\n';
        else
            cout << "none" << '\n';
    }

    return 0;
}