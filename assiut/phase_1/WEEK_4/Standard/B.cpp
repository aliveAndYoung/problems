// by LIFECOULDBEDREAM
// 2026/06/05 20:51

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ll int;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int curr;
    int n, c;
    cin >> n >> c;

    vector<int> _v(n);

    for (int i = 0; i < n; i++)
        cin >> _v[i];

    sort(_v.begin(), _v.end());
    int ans = -1;
    int l = 1, r = n, mid, count;
    l = 1;
    r = _v[n - 1];
    while (l <= r)
    {
        mid = l + ((r - l) / 2);
        count = 0;
        curr = 0;
        bool steer = false;
        for (int i = 0; i < n; i++)
        {
            if (_v[i] >= curr)
                count++, curr = _v[i] + mid;

            if (count == c)
                steer = true, ans = max(ans, mid);
        }
        if (steer)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << ans;
    return 0;
}