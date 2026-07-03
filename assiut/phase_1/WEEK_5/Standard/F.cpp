// by LIFECOULDBEDREAM
// 2026/07/02 07:53

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> _v(3 * 1e5, vector<int>(20, 0));
    // for (int i = 1; i < 10; i++)
    for (int i = 1; i < 3 * (1e5); i++)
    {
        for (int j = 0; j < 20; j++)
        {
            _v[i][j] = (i & (1 << j)) ? 1 : 0;
            _v[i][j] = _v[i][j] + _v[i - 1][j];
            // cout<<_v[i][j]<<' ';
        }
        // cout<<'\n';
    }
    int t;
    cin >> t;
    int l, r, max1;
    while (t--)
    {
        cin >> l >> r;
        max1 = 0;
        for (int i = 0; i < 20; i++)
            max1 = max(max1, _v[r][i] - _v[l - 1][i]);
        cout << r - l +1- max1 << '\n';
    }
    return 0;
}