// by LIFECOULDBEDREAM
// 2026/03/09 04:32

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> _a(s.size() + 2, 0);
    vector<int> _b(s.size() + 2, 0);
    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i - 1] == 'a')
            _a[i]++;
        else
            _b[i]++;
    }

    for (int i = 1; i <= s.size(); i++)
        (_a[i] += _a[i - 1]), (_b[i] += _b[i - 1]);

    int ans = -1;
    for (int i = 0; i <= s.size(); i++)
    {
        for (int j = i; j <= s.size(); j++)
        {
            int first, second, third;
            first = _a[i] - _a[0];
            second = _b[j] - _b[i];
            third = _a[s.size()] - _a[j];
            ans = max(ans, first + second + third);
        }
    }

    cout << ans;

    return 0;
}