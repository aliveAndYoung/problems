// by LIFECOULDBEDREAM
// 2026/02/25 14:39

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    sort(_v.begin(), _v.end());
    int days, curr, l, r, m, ans;
    cin >> days;
    while (days--)
    {
        cin >> curr;
        l = 0;
        r = n - 1;
        ans = 0;
        while (l <= r)
        {
            m = l + (r - l) / 2;
            if (_v[m] > curr)
                r = m - 1;
            else
                l = m + 1;
        }
        cout << l << "\n";
    }

    return 0;
}