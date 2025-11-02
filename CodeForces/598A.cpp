// by LIFECOULDBEDREAM
// 2025/11/02 15:53

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getSol(int a)
{
    ll ans = (a * 1ll * (a + 1)) / 2;
    for (int i = 0; i <= 31; i++)
    {
        if ((1 << i) <= a)
            ans -= (1 << (i + 1));
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        cout << getSol(a)+1 << "\n";
    }

    return 0;
}