// by LIFECOULDBEDREAM
// 2026/07/10 10:16

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int ans = 0, n = s.size();
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                    ans++;
    cout << ans;

    return 0;
}