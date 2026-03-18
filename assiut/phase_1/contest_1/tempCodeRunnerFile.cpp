// by LIFECOULDBEDREAM
// 2026/03/18 02:51

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k, a;
    cin >> n >> k >> a;
    ll base, s, t, ans;
    k = k / a;
    ans = 0x3f3f3f3f;
    while (n--)
    {
        cin >> t >> s;
        base = k / t;
        if (base)
            base = (base * t) + ((base - 1) * s) + (k % t);
        else
            base = k;
        ans = min(ans, base);
    }
    cout << ans;

    return 0;
}