// by LIFECOULDBEDREAM
// 2026/04/19 04:19

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    stack<ll> _s;
    ll a, b;
    for (ll i = 0 ; i < n; i++)
    {
        cin >> a;
        b = a % 2;
        if (!_s.empty() && _s.top() == b)
            _s.pop();
        else
            _s.push(b);
    }
    if (_s.size() > 1)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}