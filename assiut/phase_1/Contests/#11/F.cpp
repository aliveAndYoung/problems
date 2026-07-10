// by LIFECOULDBEDREAM
// 2026/07/10 11:03

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;

    cin >> n;
    vector<int> _a(n), _b;
    for (int i = 0; i < n; i++)
        cin >> _a[i];
    _b = _a;
    sort(_b.begin(), _b.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (_a[i] != _b[i])
        {
            int r, l;
            for (int j = i + 1; j < n; j++)
            {
                if (_a[j] == _b[i])
                {
                    r = j;
                    break;
                }
            }
            l = r - 1;
            while (r != i)
            {
                cout << l + 1 << ' ' << r + 1 << '\n';
                swap(_a[l], _a[r]);
                l--, r--;
            }
        }
    }

    return 0;
}