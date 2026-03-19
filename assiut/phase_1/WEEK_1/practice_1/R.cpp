// by LIFECOULDBEDREAM
// 2026/03/14 01:08
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> _v(n + 1, 0), _odd(n + 1, 0), _even(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> _v[i];
        if (i % 2 == 0)
            _even[i] = _v[i];
        else
            _odd[i] = _v[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        _even[i] = _even[i] + _even[i - 1];
        _odd[i] = _odd[i] + _odd[i - 1];
    }
    ll evens = 0, odds = 0, ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        evens = _even[i - 1];
        odds = _odd[i - 1];
        evens = evens + _odd[n] - _odd[i];
        odds = odds + _even[n] - _even[i];
        ans = ans + (evens == odds);
    }
    cout << ans;
    return 0;
}