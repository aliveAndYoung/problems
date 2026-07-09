// by LIFECOULDBEDREAM
// 2026/07/09 09:32

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
    vector<int> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        c[i] = a[i] - b[i] ;
    for (int i = 0; i < n; i++)
        d[i] = b[i] - a[i];
    // sort(c.begin(), c.end());
    // sort(d.begin(), d.end());
    int cnt = 0, length;
    for (int i = 0; i < n; i++)
    {
        length = lower_bound(d.begin(), d.end(), c[i]) - d.begin();
        cnt = cnt + length;
    }
    cout << cnt;
    return 0;
}