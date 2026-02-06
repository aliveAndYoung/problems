// by LIFECOULDBEDREAM
// 2026/02/04 01:05

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y, temp;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; i++)
            cin >> temp;
        for (int i = 0; i < m; i++)
            cin >> temp;
        cout << n + m << '\n';
    }

    return 0;
}