// by LIFECOULDBEDREAM
// 2026/07/01 09:27

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
    int a, b = 0, mask = 1, best = 0;
    vector<int> _v(n, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (a)
                _v[i] = _v[i] + (1 << j);
        }
    while (mask < (1 << n))
    {
        b = (1 << n);
        b--;
        b = b & mask;
        for (int i = 0; i < n; i++)
            if (mask & (1 << i))
                b = (b & _v[i]);
        if (__builtin_popcount(b) > __builtin_popcount(best))
            best = b;
        mask++;
    }
    cout << __builtin_popcount(best) << '\n';
    for (int i = 0; i < n; i++)
        if (best & (1 << i))
            cout << i + 1 << ' ';

    return 0;
}