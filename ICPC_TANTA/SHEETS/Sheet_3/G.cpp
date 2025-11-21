// by LIFECOULDBEDREAM
// 2025/11/20 11:42

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];
    int min = INT_MAX, ans = -1;
    for (int i = m; i <= n; i++)
    {
        int curr = v[i] - v[i - m];
        if (curr < min)
        {
            min = curr;
            ans = i - m + 1;
        }
    }
    cout << ans;
    return 0;
}
