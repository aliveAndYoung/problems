// by LIFECOULDBEDREAM
// 2026/07/01 04:52

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
    int mask = 0, counter = 0, ans = 0;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];

    while (mask < (1 << n))
    {
        counter = 0;
        for (int i = 0; i < n; i++)
            if ((mask) & (1 << i))
                if (_v[i] % 2 == 0)
                    counter++;
        if (counter > (__popcount(mask) - counter))
            ans++;
        mask++;
    }
    cout << ans;

    return 0;
}