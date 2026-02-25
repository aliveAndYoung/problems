// by LIFECOULDBEDREAM
// 2026/02/25 02:15

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _v(n + 1);
    for (int i = 1; i <= n ; i++)
        cin >> _v[i];
    sort(_v.begin()+1, _v.end());
    int curr, l, r, mid, ans = 1;
    while (m--)
    {
        l = 1, r = n;
        cin >> curr;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (_v[mid] > curr)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1 ;
                // ans = max(ans, mid);
            }
        }
        cout<< r << " " ;
    }

    return 0;
}