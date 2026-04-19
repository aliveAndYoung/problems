// by LIFECOULDBEDREAM
// 2026/04/19 03:23

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    string c;
    stack<ll> _s;
    ll base = 1,
       ans = 0, w;
    _s.push(1);
    for (ll i = 0; i < n; i++)
    {
        cin >> c;
        if (c == "for")
        {
            cin >> w;
            base = _s.top() * w;
            if (base <= 0 || base >= ll(1ll << 32))
                _s.push(ll(1ll << 32) + 1);
            else
                _s.push(_s.top() * w);
        }
        else if (c == "end")
        {
            _s.pop();
        }
        else
        {
            ans = ans + _s.top();
            if (ans >= ll(1ll << 32) || ans < 0)
            {
                cout << "OVERFLOW!!!\n";
                return 0;
            }
        }
    }
    cout << ans;

    return 0;
}