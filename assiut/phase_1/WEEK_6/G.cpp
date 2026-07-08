// by LIFECOULDBEDREAM
// 2026/07/08 06:35

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    int q;
    cin >> a >> b;
    q = __gcd(a, b);
    vector<int> divs;
    for (int i = 1; i * i <= q; i++)
    {
        if (q % i == 0)
        {
            divs.push_back(i);
            if (q / i != i)
                divs.push_back(q / i);
        }
    }
    sort(divs.begin(), divs.end());

    cin >> q;
    while (q--)
    {
        int l = 0, r = divs.size() - 1, mid, ans = -1, lower, upper;
        cin >> lower >> upper;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (divs[mid] > upper)
                r = mid - 1;
            else if (divs[mid] < lower)
                l = mid + 1;
            else
                ans = max(ans, divs[mid]) , l=mid+1;
        }
        cout << ans << '\n';
    }

    return 0;
}