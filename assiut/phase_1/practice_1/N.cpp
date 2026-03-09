// by LIFECOULDBEDREAM
// 2026/03/09 06:12

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> _v1(s.size() + 1, 0), _v2(s.size() + 1, 0), __v1(s.size() + 1, 0), __v2(s.size() + 1, 0);
    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i - 1] == '.')
            _v1[i]++;
        else
            _v2[i]++;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (_v1[i] == 1 && _v1[i] == _v1[i + 1])
        {
            __v1[i]++;
        }
        if (_v2[i] == 1 && _v2[i] == _v2[i + 1])
        {
            __v2[i]++;
        }
    }

    for (int i = 1; i <= s.size(); i++)
        (__v1[i] = __v1[i] + __v1[i - 1]), (__v2[i] = __v2[i] + __v2[i - 1]);
    int m, l, r;
    cin >> m;
    while (m--)
    {
        cin >> l >> r;
        r--;
        cout << (__v1[r] - __v1[l - 1]) + (__v2[r] - __v2[l - 1]) << '\n';
    }

    return 0;
}