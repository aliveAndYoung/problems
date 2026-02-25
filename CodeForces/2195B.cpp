// by LIFECOULDBEDREAM
// 2026/02/20 15:19

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
        vector<int> _v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> _v[i];

        bool flag = true;
        while (flag)
        {
            flag = false;

            for (int i = 1; i <= n / 2; i++)
            {
                if (_v[i] != i)
                {
                    swap(_v[i], _v[i * 2]);
                    if (i * 2 <= n / 2)
                        flag = true;
                }
            }
        }

        string ans = "YES\n";
        for (int i = 1; i <= n; i++)
        {
            if (_v[i] != i)
            {
                ans = "NO\n";
                break;
            }
        }
        cout << ans;
    }

    return 0;
}