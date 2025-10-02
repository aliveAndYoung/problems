// by LIFECOULDBEDREAM
// 2025/10/02 16:48

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x, y;
    bool ans = true;
    cin >> n >> m;
    vector<vector<char>> mat(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    cin >> x >> y;
    x--;
    y--;

    (((x + 1 < n) && (y < m)) && ((mat[x + 1][y] != 'x') && (ans = false)));
    (((x - 1 > -1) && (y < m)) && ((mat[x - 1][y] != 'x') && (ans = false)));
    (((x < n) && (y + 1 < m)) && ((mat[x][y + 1] != 'x') && (ans = false)));
    (((x < n) && (y - 1 > -1)) && ((mat[x][y - 1] != 'x') && (ans = false)));
    (((x + 1 < n) && (y + 1 < m)) && ((mat[x + 1][y + 1] != 'x') && (ans = false)));
    (((x + 1 < n) && (y - 1 > -1)) && ((mat[x + 1][y - 1] != 'x') && (ans = false)));
    (((x - 1 > -1) && (y + 1 < m)) && ((mat[x - 1][y + 1] != 'x') && (ans = false)));
    (((x - 1 > -1) && (y - 1 > -1)) && ((mat[x - 1][y - 1] != 'x') && (ans = false)));
    ans ? cout << "yes" : cout << "no";
    return 0;
}