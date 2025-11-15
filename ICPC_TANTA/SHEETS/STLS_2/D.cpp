// by LIFECOULDBEDREAM
// 2025/10/28 19:43

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long x, a;
    cin >> n >> x;
    vector<pair<long long, int>> v(200005, pair<long long, int>(0, 0));
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        v[i] = {a, i};
    }
    sort(v.begin() + 1, v.begin() + n + 1);
    int l = 1, r = n;
    while (l < r)
    {
        if (v[l].first + v[r].first == x)
        {
            cout << v[l].second << " " << v[r].second << "\n";
            return 0;
        }
        else if (v[l].first + v[r].first < x)
            l++;
        else
            r--;
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}