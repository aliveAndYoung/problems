// by LIFECOULDBEDREAM
// 2026/02/25 16:38

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

    int l = 0, r = 1, ans = 1;
    while (r < n)
    {
        if (_v[r] - _v[l] <= 5)
            r++, ans = max(ans, r - l);
        else
        {
            l++;
        }
    }
    cout << ans;
    return 0;
}