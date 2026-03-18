// by LIFECOULDBEDREAM
// 2026/02/28 15:55

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 1, 0);
    for (ll i = 1; i <= n; i++)
        cin >> v[i];
    for (ll i = 1; i <= n; i++)
        v[i] = v[i] + v[i - 1];
    ll l, r;
    while (q--)
    {
        cin >> l >> r;
        cout << v[r] - v[l - 1] << '\n';
    }

    return 0;
}