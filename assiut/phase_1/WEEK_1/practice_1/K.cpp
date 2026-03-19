// by LIFECOULDBEDREAM
// 2026/03/06 21:59

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int ans = v[0]  >1 ? 1 : -1 ;
    if (m == 0)
    {
        cout << ans;
        return 0;
    }
    if (v[m - 1] != v[m])
    {
        cout << v[m - 1];
        return 0;
    }
    cout << -1;

    return 0;
}