// by LIFECOULDBEDREAM
// 2026/05/29 12:11

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    vector<ll> a(n);
    ll curr;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
    {
        cin >> curr;
        a[i] = abs(a[i] - curr);
    }
    sort(a.begin(), a.end(), greater<ll>());
    k1 = k1 + k2;
    for (ll i = 0; (i < k1 && a[0] ); i++)
    {
        a[0]--;
        k1--;
        sort(a.begin(), a.end(), greater<ll>());
    }
    curr = 0;
    for (ll i = 0; i < n; i++)
    {
        curr = curr + (a[i] * a[i]);
    }
    curr = curr + (k1 % 2);
    cout << curr << '\n';
    return 0;
}