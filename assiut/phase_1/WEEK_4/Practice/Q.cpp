// by LIFECOULDBEDREAM
// 2026/06/16 04:29

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> _v;
    for (int i = 1; i <= 48000; i++)
        _v.push_back((i * (i + 1)) / 2);

    while (t--)
    {
        int a, b, l, r, count = 0, temp;
        cin >> a >> b;
        l = 0, r = _v.size() - 1;
        for (int i = 0; i < _v.size(); i++)
            if (_v[i] + _v[i] >= a && _v[i] + _v[i] <= b)
                count++;
        l = 0;
        r = _v.size() - 1;
        while (l < r)
        {
            if (_v[l] + _v[r] > b)
                r--;
            else if (_v[l] + _v[r] < a)
                l++;
            else
            {
                temp = upper_bound(_v.begin(), _v.begin() + r, b - _v[r]) - _v.begin();
                count = count + abs(temp - l);
                r--;
            }
        }

        cout << count << '\n';
    }

    return 0;
}