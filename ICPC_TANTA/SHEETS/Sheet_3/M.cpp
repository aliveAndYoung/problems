// by LIFECOULDBEDREAM
// 2025/11/22 13:43

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        vector<vector<ll>> v(26, vector<ll>(a + 1, 0));
        for (int i = 0; i < a; i++)
        {
            v[s[i] - 'a'][i + 1]++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                v[i][j] += v[i][j - 1];
            }
        }
        while (b--)
        {
            int l, r;
            char c;
            cin >> l >> r >> c;
            ll ans = 0;
            ans = ((r - l) / a) * v[c - 'a'][a];
            l--;
            r--;
            l = l % a;
            r = r % a;
            r++;
            l++;
            if (r > l)
            {
                ans += (v[c - 'a'][r] - v[c - 'a'][l - 1]);
            }
            else if (l > r)
            {
                ans += (v[c - 'a'][a]) - (v[c - 'a'][l - 1] - v[c - 'a'][r]);
            }
            else
            {
                ans += (v[c - 'a'][l] - v[c - 'a'][l - 1]);
            }
            cout << ans << "\n";
        }
    }
    return 0;
}