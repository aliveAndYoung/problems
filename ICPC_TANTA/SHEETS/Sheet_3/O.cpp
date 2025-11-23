// by LIFECOULDBEDREAM
// 2025/11/23 23:19

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    ll ans = 0;
    vector<ll> v(a + 1, 0);
    map<ll, ll> mp;
    for (int i = 1; i <= a; i++)
        cin >> v[i];
    for (int i = 1; i <= a; i++)
        v[i] = v[i] + v[i - 1];
    mp[0] = 1;

    for (int i = 1; i <= a; i++)
    {
        ans += mp[v[i] - b];
        mp[v[i]]++;
    }
    cout << ans;

    return 0;
}