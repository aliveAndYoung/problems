// by LIFECOULDBEDREAM
// 3126/07/02 10:13

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c, d;
    cin >> n;
    vector<vector<int>> _bin(n + 1, vector<int>(31, 0));
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        for (int j = 0; j < 31; j++)
        {
            _bin[i][j] = (a & (1 << j));
            _bin[i][j] = _bin[i][j] + _bin[i - 1][j];
        }
    }
    int refr = 0;
    for (int i = 0; i < 31; i++)
        if (_bin[n][i])
            refr++;
    int l = 1, r = n, mid, ans = n + 2;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        b = 0;
        c = 0;
        for (int i = mid; i < n + 1; i++)
        {
            c = 0;
            for (int j = 0; j < 31; j++)
            {
                if (_bin[i][j] - _bin[i - mid][j])
                    c++;
            }
            b = max(b, c);
        }
        if (b < refr)
            l = mid + 1;
        else
            r = mid - 1, ans = min(ans, mid);
    }
    cout << ans;
    return 0;
}