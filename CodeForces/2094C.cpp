// by LIFECOULDBEDREAM
// 2026/02/08 21:28

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
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        vector<int> freq(2 * n + 1, 0);
        map<int, int> ans;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
                ans[i + j + 2] = v[i][j];
                freq[v[i][j]]++;
            }
        for (int i = 1; i <= 2 * n; i++)
        {
            if (freq[i] == 0)
            {
                ans[1] = i;
                break;
            }
        }

        for (auto it : ans)
            cout << it.second << " ";
        cout << "\n";
    }

    return 0;
}