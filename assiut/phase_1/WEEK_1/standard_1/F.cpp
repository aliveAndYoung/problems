// by LIFECOULDBEDREAM
// 2026/02/28 16:10

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n >> q;
    vector<ll> _v(n + 1), diff(n + 2, 0);
    for (ll i = 1; i <= n; i++)
        cin >> _v[i];
    ll l, r, curr;
    while (q--)
    {
        cin >> l >> r >> curr;
        diff[l] += curr;
        diff[r + 1] = diff[r + 1] - curr;
    }
    for (ll i = 1; i < diff.size(); i++)
        diff[i] = diff[i] + diff[i - 1];
    for (ll i = 1; i <= n; i++)
        cout << _v[i] + diff[i] << ' ';
    return 0;
}