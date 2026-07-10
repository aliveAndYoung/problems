// by LIFECOULDBEDREAM
// 2026/07/10 10:06

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> _v(26, 0);
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        _v[c - 'A']++;
    }
    int ans = 1e9;
    for (int i = 0; i < k; i++)
        ans = min(ans, _v[i]);
    cout << ans * k;
    return 0;
}