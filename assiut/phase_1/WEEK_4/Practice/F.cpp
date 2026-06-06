// by LIFECOULDBEDREAM
// 2026/06/06 22:34

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int l = 0, r = 1e10, mid, z, x = 0, y;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        z = k;
        bool steer_left = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] * mid > b[i])
            {
                if ((a[i] * mid) - b[i] <= z)
                    z = z - ((a[i] * mid) - b[i]);
                else
                    steer_left = true;
            }
        }
        if (steer_left)
            r = mid - 1;
        else
            l = mid + 1 , x = max(x, mid) ;
    }
    cout << x;

    return 0;
}