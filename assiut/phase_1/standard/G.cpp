// by LIFECOULDBEDREAM
// 2026/03/03 16:38

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> grid(n + 1, vector<ll>(m + 1, 0));
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
            cin >> grid[i][j];
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
            grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1];
    ll x1, y1, x2, y2;
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << grid[x2][y2] - grid[x1 - 1][y2] - grid[x2][y1 - 1] + grid[x1 - 1][y1 - 1] << '\n';
    }
    return 0;
}