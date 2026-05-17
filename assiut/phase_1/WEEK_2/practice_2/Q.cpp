// by LIFECOULDBEDREAM
// 2026/05/17 20:12

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        string s;
        cin >> s;
        ll ans = s.size();
        for (ll i = 1; i <= x; i++)
        {
            ll paste_num = s[i - 1] - '1';
            if (s.size() < x)
            {
                string pasted_content = s.substr(i);
                for (ll y = 0; y < paste_num; y++)
                {
                    s.insert(s.end(), pasted_content.begin(), pasted_content.end());
                }
            }
            ans = ans + ((ans - i) * paste_num) % (ll)1000000007;
        }
        cout << ans % 1000000007 << '\n';
    }

    return 0;
}