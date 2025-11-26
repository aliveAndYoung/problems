// by LIFECOULDBEDREAM
// 2025/11/26 21:08

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string solve(int a)
{
    if (a == 1)
        return "deficient";

    ll ans = 1;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            ans = ans + i;
            ans = ans + (a / i);
            if (i * i == a)
                ans = ans - i;
        }
    }

    if (ans > a)
        return "abundant";

    if (ans < a)
        return "deficient";

    return "perfect";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a;

    while (n--)
    {
        cin >> a;
        cout << solve(a) << "\n";
    }

    return 0;
}