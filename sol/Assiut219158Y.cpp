// by LIFECOULDBEDREAM
// 2025/09/19 12:36

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    ans = (((a % 100) * (b % 100)) % 100 * ((c % 100) * (d % 100) % 100)) % 100;
    if (ans < 10)
    {
        cout << "0" << ans;
        return 0;
    }

    cout << ans;
    return 0;
}