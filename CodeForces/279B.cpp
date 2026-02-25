// by LIFECOULDBEDREAM
// 2026/02/25 14:59

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    int l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        if (sum + _v[r] <= m)
            sum += _v[r], r++, ans = max(ans, r - l);
        else
            break;
    }
    while (r < n && l < n )
    {

        if (sum + _v[r] <= m)
        {
            sum += _v[r];
            ans = max(ans, r - l + 1);
            r++;
        }
        else
        {
            if (l == r && r + 1 < n)
                r++;
            else
                sum -= _v[l];
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}