// by LIFECOULDBEDREAM
// 2025/11/19 19:57

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    char c;
    cin >> a >> b;
    vector<vector<int>> v(a + 1, vector<int>(a + 1, 0));

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cin >> c;
            v[i][j] = (c == '*') ? 1 : 0;
        }
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            v[i][j] += v[i - 1][j];
        }
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            v[i][j] += v[i][j - 1];
        }
    }
    while (b--)
    {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        int ans = v[y2][x2] - v[y1 - 1][x2] - v[y2][x1 - 1] + v[y1 - 1][x1 - 1];
        cout << ans << "\n";
    }

    return 0;
}