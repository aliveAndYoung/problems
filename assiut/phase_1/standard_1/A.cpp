// by LIFECOULDBEDREAM
// 2026/02/28 15:43

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> _v(n + 1);
    int a, b;

    while (q--)
    {
        cin >> a >> b;
        if (a == 1)
            _v[b]++;
        else
            cout << _v[b] << '\n';
    }

    return 0;
}