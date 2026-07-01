// by LIFECOULDBEDREAM
// 2026/07/01 06:12

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, x = 0, y = 0, z = 0;
    cin >> a >> b;
    for (int i = 0; i < 63; i++)
        if (b & (1ll << i))
            x = i;
    bitset<64> bin = 0;

    for (int i = 2; i <= x + 1; i++)
    {
        bin = ((1ll << i) - 1);
        for (int j = 0; j < i - 1; j++)
        {
            bin[j] = 0;
            if (bin.to_ullong() >= a && bin.to_ullong() <= b)
                z++;
            bin[j] = 1;
        }
    }
    cout << z;
    return 0;
}