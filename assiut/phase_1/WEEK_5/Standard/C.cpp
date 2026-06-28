// by LIFECOULDBEDREAM
// 2026/06/28 13:31

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;

    cin >> n >> q;
    int x;
    while (q--)
    {
        cin >> x;
        if (x == 1)
            for (int i = 0; i < 33; i++)
                if (((n >> i) & 1) == 0)
                {
                    n |= (1 << i);
                    break;
                }

        if (x == 2)
            for (int i = 0; i < 33; i++)
                if (((n >> i) & 1) == 1)
                {
                    n &= (~(1 << i));
                    break;
                }

        if (x == 3)
            if (n == 0)
                n = -1;
            else
                for (int i = 0; i < 33; i++)
                    if (((n >> i) & 1) == 0)
                        n |= (1 << i);
                    else
                        break;

        if (x == 4)
            for (int i = 0; i < 33; i++)
                if (((n >> i) & 1) == 1)
                    n &= (~(1 << i));
                else
                    break;
        if (x == 5)
            if (__popcount(n) == 1)
                cout << "is power of two\n";
            else
                cout << "not power of two\n";
        else
            cout << n << '\n';
    }

    return 0;
}