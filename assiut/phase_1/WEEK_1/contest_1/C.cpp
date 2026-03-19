// by LIFECOULDBEDREAM
// 2026/03/17 20:41

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct _Letters
{
    vector<ll> _v;
    _Letters()
    {
        _v = vector<ll>(26, 0);
    }
    void operator+=(const _Letters &a)
    {
        for (ll i = 0; i < 26; i++)
            _v[i] += a._v[i];
    }
    _Letters operator+(const _Letters a)
    {
        _Letters sum = *this;
        for (ll i = 0; i < 26; i++)
            sum._v[i] = sum._v[i] + a._v[i];
        return sum;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        char curr;
        cin >> n >> m;
        vector<_Letters> _v(n);
        _Letters ans;
        for (ll i = 0; i < n; i++)
        {
            cin >> curr;
            _v[i]._v[curr - 'a']++;
            ans._v[curr - 'a']++;
        }
        for (ll i = 1; i < n; i++)
        {
            _v[i] += _v[i - 1];
        }

        ll w;
        for (ll i = 0; i < m; i++)
        {
            cin >> w;
            ans = ans + _v[w - 1];
        }
        for (ll i = 0; i < 26; i++)
            cout << ans._v[i] << ' ';
        cout << '\n';
    }

    return 0;
}