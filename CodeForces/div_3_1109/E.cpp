// by LIFECOULDBEDREAM
// 2026/07/14 19:28

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
        int n, q;
        cin >> n >> q;
        vector<int> s(n + 1, 0);
        char curr;
        for (int i = 1; i <= n; i++)
        {
            cin >> curr;
            s[i] = curr - '0';
        }

        vector<int>
            _0(n + 1, 0),
            _1(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '0')
                    _0[i] = 0, _1[i] = 1;
                else
                    _0[i] = 1, _1[i] = 0;
            }
            else
            {
                if (s[i] == '1')
                    _0[i] = 0, _1[i] = 1;
                else
                    _0[i] = 1, _1[i] = 0;
            }
        }

        for (int i = 1; i <= n; i++)
            _1[i] = _1[i] + _1[i - 1], _0[i] = _0[i] + _0[i - 1];
        int l, r, k, cnt;
        while (q--)
        {
            cin >> l >> r >> k;
            cnt = min(_0[r] - _0[l - 1], _1[r] - _1[l - 1]);
            if (k < cnt)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}