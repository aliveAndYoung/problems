// by LIFECOULDBEDREAM
// 2026/07/14 17:45

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
        int counter = 0, ans = 0;
        char curr;
        while (n--)
        {
            cin >> curr;
            if (curr == '#')
                counter++;
            else
                ans = max(ans, counter), counter = 0;
        }
        ans = max(ans, counter), counter = 0;
        cout << (ans / 2) + (ans % 2 == 1) << '\n';
    }

    return 0;
}