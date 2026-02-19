// by LIFECOULDBEDREAM
// 2026/02/19 15:33

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> _v(n + 1, 0);
    int hole;
    for (int i = 0; i < m; i++)
    {
        cin >> hole;
        _v[hole] = 1;
    }
    int curr_pos = 1;
    if (_v[1] == 1)
    {
        cout << 1;
        return 0;
    }
    int _a, _b;
    for (int i = 0; i < k; i++)
    {
        cin >> _a >> _b;
        if (_a == curr_pos)
        {
            curr_pos = _b;
        }
        else if (_b == curr_pos)
        {
            curr_pos = _a;
        }
        if (_v[curr_pos] == 1)
        {
            cout << curr_pos;
            return 0;
        }
    }
    cout << curr_pos;

    return 0;
}