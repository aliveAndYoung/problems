// by LIFECOULDBEDREAM
// 2026/06/29 04:21

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        double p, q;
        cin >> p >> q;
        cout << fixed << setprecision(8) << ((p / q) * (p / q) * (p / q)) / 2 << '\n';
    }

    return 0;
}