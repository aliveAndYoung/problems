// by LIFECOULDBEDREAM
// 2025/12/01 18:44

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans{};
    cin >> n;
    for (int i = 0; i < 31; i++)
    {
        if (n & (1 << i))
            ans++;
    }
    cout << ans;
    return 0;
}