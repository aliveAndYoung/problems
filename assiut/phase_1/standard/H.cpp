// by LIFECOULDBEDREAM
// 2026/03/04 14:09

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<ll> v(s.size() +1, 0);
    for (ll i = 1; i <= s.size(); i++)
        if (s[i-1] == 'a')
            v[i]++;
    for (ll i = 1; i <= s.size(); i++)
        v[i] = v[i] + v[i - 1];
    ll q, l, r;
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        cout << v[r] - v[l - 1] << '\n';
    }
    return 0;
}