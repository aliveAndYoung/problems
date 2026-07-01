// by LIFECOULDBEDREAM
// 2026/06/28 19:51

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> _v(n);
    vector<vector<int>> ans(1 << n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    // sort(_v.begin(), _v.end());
    for (int i = 0; i < 1 << n; i++)
        for (int j = 0; j < n; j++)
            if (((i >> j) & 1) == 1)
                ans[i].push_back(_v[j]);

    sort(ans.begin(), ans.end());
    for (int i = 0; i < 1 << n; i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << '\n';
    }

    return 0;
}