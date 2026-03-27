// by LIFECOULDBEDREAM
// 2026/03/27 01:52

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q, m;
    string _s, curr, query;
    cin >> n >> q >> _s;
    while (q--)
    {
        cin >> query >> m;
        for (int i = 0; i < m; i++)
        {
            if (query[0] == 'p')
                prev_permutation(_s.begin(), _s.end());
            else
                next_permutation(_s.begin(), _s.end());
        }
        cout << _s << '\n';
    }

    return 0;
}