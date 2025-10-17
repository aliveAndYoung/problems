// by LIFECOULDBEDREAM
// 2025/10/12 23:05

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 1;
    cin >> n;
    while (n--)
        (ans = ans * 5) && (ans = ans % 100);
    cout << ans;

    return 0;
}
// loool