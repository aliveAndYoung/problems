// by LIFECOULDBEDREAM
// 2026/07/31 17:41

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, n, k, q, curr;
    cin >> l >> n >> k;

    set<int> un_col;
    un_col.insert(0);
    un_col.insert(l + 1);

    int ans = (l + 1) / (k + 1);
    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        int left, right;
        cin >> curr;
        if (un_col.count(curr) == 1)
            continue;

        auto it = un_col.lower_bound(curr);
        right = *it;
        left = *prev(it);
        
        un_col.insert(curr);

        ans = ans - ((right - left) / (k + 1));
        ans = ans + ((curr - left) / (k + 1));
        ans = ans + ((right - curr) / (k + 1));

        if (ans < n)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;

    return 0;
}