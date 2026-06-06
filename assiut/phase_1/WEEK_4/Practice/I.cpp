// by LIFECOULDBEDREAM
// 2026/06/07 00:07

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
    vector<int> _v(n);
    set<int> _s;
    for (int i = 0; i < n; i++)
        cin >> _v[i], _s.insert(_v[i]);
    int minn, maxx;
    minn = *_s.begin();
    maxx = *_s.rbegin();
    if (maxx == minn)
    {
        cout << 0;
        return 0;
    }
    // set<int> ima, imi;
    // for (int i = 0; i < n; i++)
    // {
    //     if (_v[i] == maxx)
    //         ima.insert(i);
    //     if (_v[i] == minn)
    //         imi.insert(i);
    // }
    int l = 0, r = n - 1, mid, ans = n - 1, a, b, c;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        bool steer = false ;
        for (int i = 0; i < n; i++)
        {
            if (_v[i] == maxx)
            {
                a = i + mid;
                b = i - mid;
                if (a < n && _v[a] == minn)
                    steer = true , ans = min(ans, mid);
                if (b > 0 && _v[b] == minn)
                    steer = true , ans = min(ans, mid);
            }
        }
        if( steer )
    }
    return 0;
}