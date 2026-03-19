// by LIFECOULDBEDREAM
// 2026/03/18 03:22

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void getDecimalLength(ll _a)
{
    ll ans = 0;
    while (_a)
    {
        _a /= 10;
        ans++;
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    set<ll> _s;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            _s.insert(i);
            // _s.insert(n / i);
        }
    }
    if (_s.size() == 1)
        getDecimalLength(n);
    else
        getDecimalLength(n / *_s.rbegin());

    return 0;
}