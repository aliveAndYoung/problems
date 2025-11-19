// by LIFECOULDBEDREAM
// 2025/11/19 18:11

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    vector<ll> v(a + 1, 0);
    for (int i = 1; i <= a; i++)
        cin >> v[i];
    for (int i = 1; i <= a; i++)
        v[i] = v[i] + v[i - 1];
    ll c, d;
    while (b--)
    {
        cin >> c >> d;
        cout << v[d] - v[c - 1] << "\n";
    }
    return 0;
}