// by LIFECOULDBEDREAM
// 2026/05/30 12:06

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> v1(n), v2(n);
    for (ll i = 0; i < n; i++)
        cin >> v1[i];
    v2[n - 1] = v1[n - 1];
    for (ll i = n - 2; i >= 0; i--)
        v2[i] = v1[i] + v2[i + 1];
    for (ll i = 1; i < n; i++)
        v1[i] = v1[i] + v1[i - 1];
    set<ll> _s;
    ll maxx = ll(-1e18);
    for (ll i = n - 1; i >= 0; i--)
    {
        if (_s.count(v1[i]))
            maxx = max(maxx, v1[i]);
        _s.insert(v2[i]);
    }
    cout << maxx << '\n';
    return 0;
}