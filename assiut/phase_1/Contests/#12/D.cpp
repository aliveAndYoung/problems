// by LIFECOULDBEDREAM
// 2026/07/09 08:59

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

    vector<vector<int>> _v(n, vector<int>(n, 1));
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            _v[i][j] = _v[i][j - 1] + _v[i - 1][j];
    cout << _v[n - 1][n - 1];
    return 0;
}