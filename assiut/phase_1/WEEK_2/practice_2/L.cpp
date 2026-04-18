// by LIFECOULDBEDREAM
// 2026/04/18 02:52

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> _v(n);
    for (ll i = 0; i < n; i++)
        cin >> _v[i];
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        _v[i] = _v[i] - temp;
    }
    sort(_v.begin(), _v.end());
    ll ans = 0;
    auto it = upper_bound(_v.begin(), _v.end(), 0);
    ll firstPos = it - _v.begin();
    if (firstPos == n)
    {
        cout << 0;
        return 0;
    }

    ans = ((n - firstPos) * ((n - firstPos) - 1)) / 2;
    for (ll i = 0; i < firstPos; i++)
    {
        temp = upper_bound(_v.begin(), _v.end(), 0 - _v[i]) - _v.begin();
        ans = ans + (n - temp);
    }

    cout << ans;

    return 0;
}