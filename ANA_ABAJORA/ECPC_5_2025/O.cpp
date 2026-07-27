// by LIFECOULDBEDREAM
// 2026/07/28 00:07

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<set<int>> _v1(n);
        vector<int> ans(m, 0);
        char curr;
        for (int i = 0; i < n; i++)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cin >> curr;
                if (curr == '1')
                    _v1[i].insert(j);
            }
        }
        for (int i = 0; i < n; i++)
            ans[*_v1[i].begin()]++;

        int r, c, num;
        for (int i = 0; i < q; i++)
        {
            cin >> num;
            if (num == 2)
            {
                cin >> r;
                cout << ans[r] << '\n';
            }
            else
            {
                cin >> r >> c;
                if (!_v1[r].empty())
                {
                    for (int ppppp = 0; ppppp < *_v1[r].begin(); ppppp++)
                        ans[ppppp]--;
                }
                if (_v1[r].count(c))
                    _v1[r].erase(c);
                else
                    _v1[r].insert(c);
                if (!_v1[r].empty())
                {
                    for (int ppppp = 0; ppppp < *_v1[r].begin(); ppppp++)
                        ans[ppppp]++;
                }
            }
        }
    }
    return 0;
}