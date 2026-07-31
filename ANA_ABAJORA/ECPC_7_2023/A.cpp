// by LIFECOULDBEDREAM
// 2026/07/31 15:40

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
        int a, c, lcm, gcd;
        cin >> a >> c;
        set<pair<int, int>> ans;
        for (int i = 1; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                lcm = c, gcd = i;
                if ((lcm * gcd) % a == 0 && __gcd(((lcm * gcd) / a), a) == gcd)
                    ans.insert({gcd, (lcm * gcd) / a});
                gcd = a / i;
                if ((lcm * gcd) % a == 0 && __gcd(((lcm * gcd) / a), a) == gcd)
                    ans.insert({gcd, (lcm * gcd) / a});
            }
        }
        if (ans.empty())
            cout << "-1\n";
        else
            cout << ans.begin()->second << '\n';
    }

    return 0;
}