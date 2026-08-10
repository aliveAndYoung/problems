// by LIFECOULDBEDREAM
// 2026/08/10 22:06

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
int solve(int s, int e)
{
    if (s + 1 == e || s == e)
        return 1;
    if (s + 2 == e)
        return 1 + solve(s + 1, e);
    if (s + 3 == e)
        return 1 + solve(s + 1, e) + solve(s + 2, e);
    return solve(s + 1, e) + solve(s + 2, e) + solve(s + 3, e);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int start, end;
    cin >> start >> end;
    cout << solve(start, end);

    return 0;
}