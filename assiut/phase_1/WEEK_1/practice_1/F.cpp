// by LIFECOULDBEDREAM
// 2026/02/27 01:56

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> s(1e5 + 1);
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    map<int, int> mp;
    sort(_v.begin(), _v.end());
    for (int i = 0; i < n; i++)
        mp[_v[i]]++;
    for (auto [num, cnt] : mp)
        for (int i = 0; i < cnt; i++)
            s[i] = s[i] + to_string(num) + ' ';

    for (int i = 0; i < 1e5; i++)
        if (s[i] != "")
            cout << s[i] << '\n';

    return 0;
}