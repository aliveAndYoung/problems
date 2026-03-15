// by LIFECOULDBEDREAM
// 2026/03/14 23:39

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> grid_l(n + 2, vector<ll>(m + 2, 0)), grid_r(n + 2, vector<ll>(m + 2, 0));

    ll t, x, y, k, a;

    while (q--)
    {
        cin >> t >> x >> y >> k >> a;
        if (t == 1)
        {
            grid_r[x][y] = grid_r[x][y] + a;
            if (x + k < n + 2 && y + k < m + 2)
                grid_r[x + k][y + k] = grid_r[x + k][y + k] - a;
        }
        else
        {
            grid_l[x][y] = grid_l[x][y] + a;
            if (x + k < n + 2 && y - k >= 0)
                grid_l[x + k][y - k] = grid_l[x + k][y - k] - a;
        }
    }
    for (ll i = 1; i < n + 2; i++)
    {
        for (ll j = 1; j < m + 2; j++)
        {
            if (i - 1 >= 0 && j - 1 >= 0)
                grid_r[i][j] = grid_r[i][j] + grid_r[i - 1][j - 1];
        }
    }
    for (ll i = 1; i < n + 2; i++)
    {
        for (ll j = m; j >= 0; j--)
        {
            if (i - 1 >= 0 && j + 1 < m + 2)
                grid_l[i][j] = grid_l[i][j] + grid_l[i - 1][j + 1];
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cout << grid_r[i][j] + grid_l[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}