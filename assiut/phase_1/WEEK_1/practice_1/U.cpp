// by LIFECOULDBEDREAM
// 2026/03/15 16:26

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
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n + 2, 0);
        ll l, r;
        for (ll i = 0; i < n; i++)
        {
            cin >> l >> r;
            v[l]++;
            v[r + 1]--;
        }
        for (ll i = 1; i <= n + 1; i++)
            v[i] = v[i] + v[i - 1];
        ll window = 0, ans;
        for (ll i = 1; i <= m; i++)
        {
            window = window + v[i];
        }
        ans = window;
        for (ll i = m + 1; i <= n; i++)
        {
            window = window + v[i] - v[i - m];
            ans = max(ans, window);
        }
        cout << (n * m) - ans << '\n';
    }

    return 0;
}