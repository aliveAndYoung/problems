// by LIFECOULDBEDREAM
// 2026/06/06 04:01

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c, t;
    cin >> c >> t;
    int l, r, mid, b = -1;
    double a ;

    l = 0,
    r = 1e9;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        a = log2(mid) * double(mid) * double(c);
        if (a == double(t))
        {
            cout << fixed << double(mid);
            return 0;
        }
        if (a < t)
            b = max(b, mid), l = mid + 1;
        else
            r = mid - 1;
    }
    double aa = -1, bb = -1, lll = b, rrr = b + 1, midd;
    while (lll <= rrr)
    {
        midd = lll + (rrr - lll) / double(2);
        aa = log2(midd) * midd * double(c);
        if (aa == t)
        {
            cout << fixed << double(midd);
            return 0;
        }
        if (aa < t)
            bb = max(bb,midd), lll = midd + 1e-6;
        else
            rrr = midd - 1e-6;
    }
    cout << fixed << bb;
    return 0;
}