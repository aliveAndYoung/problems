// by LIFECOULDBEDREAM
// 2026/06/19 20:57

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
        double a, b, s, c;
        cin >> a >> b >> s;
        c = a / b;
        c = c * c;
        cout << fixed << setprecision(8) << s * c << '\n';
    }

    return 0;
}