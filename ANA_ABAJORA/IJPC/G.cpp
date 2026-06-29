// by LIFECOULDBEDREAM
// 2026/06/29 03:45

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
        int odd = 0, even = 0, temp;
        string s;
        cin >> temp >> s;
        for (int i = 0; i < s.size(); i++)
            if ((s[i] - '0') % 2 == 1)
                odd++;
        if (odd % 2 == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}