// by LIFECOULDBEDREAM
// 2026/07/14 18:00

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int spare = 0, curr;
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> curr;
            if (curr > i)
                spare = spare + curr - i;
            if (i > curr)
                if (curr + spare >= i)
                    spare = spare - (i - curr);
                else
                    flag = true;
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}