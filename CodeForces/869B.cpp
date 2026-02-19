// by LIFECOULDBEDREAM
// 2026/02/19 22:47

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, ans = 1;
    cin >> a >> b;
    if (b - a > 9)
        cout << 0;
    else
    {
        for (ll i = a + 1; i <= b; i++)
        {
            ans = ans * (i % 10);
            ans = ans % 10;
        }
        cout << ans;
    }

    return 0;
}
// 999999999000000000 1000000000000000000