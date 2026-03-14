// by LIFECOULDBEDREAM
// 2026/03/12 04:27

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
        ll n, k;
        cin >> n >> k;
        vector<ll> _v(n + 1, 0), _p1(n + 1, 0), _p2(n + 1, 0), _s1(n + 1, 0), _s2(n + 1, 0);
        ll x = 0;
        char curr;
        for (ll i = 1; i <= n; i++)
        {
            cin >> curr;
            if (curr == '+')
                x++;
            else
                x--;
            _v[i] = x;
        }
        for (ll i = 1; i <= n; i++)
        {
            _p1[i] = min(_p1[i - 1], _v[i]);
            _p2[i] = max(_p2[i - 1], _v[i]);
        }

        _s1[n] = _s2[n] = _v[n];

        for (ll i = n - 1; i >= 0; i--)
        {
            _s1[i] = min(_s1[i + 1], _v[i]);
            _s2[i] = max(_s2[i + 1], _v[i]);
        }

        ll l, r, min_1, min_2, max_1, max_2, ans;

        while (k--)
        {
            cin >> l >> r;
            min_1 = _p1[l - 1];
            max_1 = _p2[l - 1];
            min_2 = r < n ? _s1[r + 1] - (_v[r] - _v[l - 1]) : min_1;
            max_2 = r < n ? _s2[r + 1] - (_v[r] - _v[l - 1]) : max_1;

            if ((min_1 < min_2 && max_1 < max_2) || (max_2 < max_1 && min_2 < min_1))
            {
                ans = (max_1 - min_1) + (max_2 - min_2) + 2;
                cout << ans << '\n';
            }
            else
            {
                ans = max(max_1, max_2) - min(min_1, min_2) + 1;
                cout << ans << '\n';
            }
        }
    }
    return 0;
}