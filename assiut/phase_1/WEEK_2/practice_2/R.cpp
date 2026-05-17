// by LIFECOULDBEDREAM
// 2026/05/18 00:22

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
        ll n;
        cin >> n;
        vector<ll> _v(n + 1), __v(n + 1, 1);
        stack<ll> _s;
        for (ll i = 1; i <= n; i++)
        {
            cin >> _v[i];
            while (!_s.empty() && _v[_s.top()] > _v[i])
            {
                ll curr = _s.top();
                _s.pop();
                __v[curr] += (i - curr - 1);
                if (!_s.empty())
                {
                    __v[curr] += curr - _s.top() - 1;
                }
                else
                {
                    __v[curr] += curr - 1;
                }
            }
            _s.push(i);
        }
        while (!_s.empty())
        {
            ll curr = _s.top();
            _s.pop();
            __v[curr] += n-curr;
            if (!_s.empty())
            {
                __v[curr] += curr - _s.top() - 1;
            }
            else
            {
                __v[curr] += curr - 1;
            }
        }

        ll ans = -1;
        for (ll i = 1; i <= n; i++)
            ans = max(ans, __v[i] * _v[i]);
        cout << ans << '\n';
    }

    return 0;
}