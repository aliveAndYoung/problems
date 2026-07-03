// by LIFECOULDBEDREAM
// 2026/07/02 10:05

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n;
    vector<int> _a(n, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (i != j)
                _a[i] = _a[i] | a, _a[j] = _a[j] | a;
        }
    for (int i = 0; i < n; i++)
        cout << _a[i] << ' ';
    return 0;
}