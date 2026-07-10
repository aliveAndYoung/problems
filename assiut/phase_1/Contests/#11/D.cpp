// by LIFECOULDBEDREAM
// 2026/07/10 09:41

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> _v(26, 1e9);
    for (int kkkk = 0; kkkk < 26; kkkk++)
    {
        char curr = 'a' + kkkk;
        int l, r, mid, a, b, c;
        bool flag;
        l = 1;
        r = s.size();
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            a = 0;
            flag = false;
            for (int i = 0; i < mid; i++)
                if (s[i] == curr)
                    a++;
            if (a == 0)
                flag = true;
            for (int i = 0; i < s.size() - mid; i++)
            {
                if (s[i] == curr)
                    a--;
                if (s[i + mid] == curr)
                    a++;
                if (a == 0)
                    flag = true;
            }
            if (flag)
                l = mid + 1;
            else
                r = mid - 1, _v[kkkk] = min(_v[kkkk], mid);
        }
    }
    sort(_v.begin(), _v.end());
    cout << _v[0];

    return 0;
}