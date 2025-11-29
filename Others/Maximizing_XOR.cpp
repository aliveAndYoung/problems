// by LIFECOULDBEDREAM
// 2025/11/29 17:24

#include <bits/stdc++.h>
using namespace std;
void solve(int _l, int _r)
{
    int max = 0;
    for (int i = _l; i < _r; i++)
    {
        for (int j = i + 1; j <= _r; j++)
        {
            if ((i ^ j) > max)
                max = i ^ j;
        }
    }
    cout << max;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, r;
    cin >> l >> r;
    solve(l, r);
    return 0;
}