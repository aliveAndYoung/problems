// by LIFECOULDBEDREAM
// 2026/06/14 03:41

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, aa;
    cin >> a >> b;
    vector<int> _v(a.size());
    for (int i = 0; i < a.size(); i++)
        cin >> _v[i];

    int l, r, mid, c, d = 0x3f3f3f33f3f3f;
    l = 1;
    r = a.size() ;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        aa = a;
        c = 0;
        for (int i = 0; i < mid; i++)
            aa[_v[i]-1] = 'A';
        for (int i = 0; i < aa.size(); i++)
            if (c < b.size() && aa[i] == b[c])
                c++;
        if (c == b.size())
            l = mid + 1;
        else
             d = min(d, mid) , r = mid - 1;
    }
    cout << d-1;
    return 0;
}