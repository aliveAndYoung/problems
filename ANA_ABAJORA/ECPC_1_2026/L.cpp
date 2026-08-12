// by LIFECOULDBEDREAM
// 2026/08/12 17:24

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
        int l, r, x;
        cin >> l >> r >> x;
        int ans = x - l + 1;
        int smallest_prev = 32;
        for (int i = 0; i < 31; i++)
        {
            if ((1 << i) <= x && !((1 << i) & x))
            {
                // 1==> int remove = 0, cycles, offset;
                // cycles = (x - l + 1) / (1 << (i + 1));
                // remove = remove + (cycles * (1 << i));
                // offset = (x % (1 << (i + 1))) / (1 << i);
                // remove = remove + offset;
                // ans = ans - remove;
                // 2 ==> ans = ans / 2;
                smallest_prev = min(smallest_prev, i);
                int remove = 0, cycles, offset;
                cycles = (x - l + 1) / (1 << (i + 1));
                if (smallest_prev != 32)
                    cycles = cycles / (1 << smallest_prev);
                remove = remove + (cycles * (1 << i));
                offset = (x % (1 << (i + 1))) / (1 << i);
                if (smallest_prev != 32)
                    offset = offset / (1 << smallest_prev);
                remove = remove + offset;
                ans = ans - remove;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}