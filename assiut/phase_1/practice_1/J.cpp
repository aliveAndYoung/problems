// by LIFECOULDBEDREAM
// 2026/03/06 21:36

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
    map<int, int> _mp;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            _mp[_v[i] + _v[j]]++;
    int ans = 0;
    for (auto _it : _mp)
        ans = max(ans, _it.second);
    cout << ans;
    return 0;
}