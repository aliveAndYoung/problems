// by LIFECOULDBEDREAM
// 2026/06/16 03:30

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l, ans, counter;
    l = 0;
    counter = 0;
    ans = 0;
    for (int r = 0; r < n; r++)
    {
        if (s[r] == 'a')
            counter++;
        while (counter > k)
        {
            if (s[l] == 'a')
                counter--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    l = 0;
    counter = 0;
    for (int r = 0; r < n; r++)
    {
        if (s[r] == 'b')
            counter++;
        while (counter > k)
        {
            if (s[l] == 'b')
                counter--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans;
    return 0;
}