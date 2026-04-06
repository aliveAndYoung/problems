// by LIFECOULDBEDREAM
// 2026/03/31 17:28

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> _v(3);
    vector<int> _n(3, 0);
    map<int, char> _m = {{0, 'M'}, {1, 'A'}, {2, 'R'}};
    map<char, int> m_ = {{'m', 0}, {'a', 1}, {'r', 2}};

    cin >> _v[0] >> _v[1] >> _v[2];
    int curr = 0;
    while (true)
    {
        if (_v[curr].size() == _n[curr])
        {
            cout << _m[curr] << '\n';
            return 0;
        }
        _n[curr]++;
        curr = m_[_v[curr][_n[curr]-1]];
    }

    return 0;
}