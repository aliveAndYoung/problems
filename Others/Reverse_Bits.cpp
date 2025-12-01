// by LIFECOULDBEDREAM
// 2025/12/01 18:35

#include <bits/stdc++.h>
using namespace std;
void solve(int a)
{
    unsigned int ans{};
    for (int i = 0; i < 32; i++)
        ans |= ((a >> i) & 1) << (31 - i);
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        solve(a);
    }
    return 0;
}