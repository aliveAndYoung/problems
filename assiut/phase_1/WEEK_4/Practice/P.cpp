// by LIFECOULDBEDREAM
// 2026/06/16 03:41

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
bool happy(vector<int> &_v)
{
    int count = 0;
    if (_v[0] >= 2)
        count++;
    if (_v[1] >= 2)
        count++;
    if (_v[2] >= 1)
        count++;
    if (_v[3] >= 1)
        count++;
    if (_v[4] >= 1)
        count++;
    if (_v[5] >= 1)
        count++;
    if (_v[6] >= 1)
        count++;
    if (_v[7] >= 1)
        count++;
    if (_v[8] >= 1)
        count++;
    if (_v[9] >= 1)
        count++;
    if (_v[10] >= 1)
        count++;
    return count >= 11;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string casee;
        cin >> casee;
        int l = 0, ansl = 0, ansr = 0, ans = 0x3535353535;
        vector<int> freq(11);
        for (int r = 0; r < casee.size(); r++)
        {
            freq[casee[r] - '0']++;
            if (casee[r] - '0' == 0 && r > 0 && casee[r - 1] - '0' == 1)
                freq[10]++;
            while (happy(freq))
            {
                if ((r - l + 1) < ans)
                    ansl = l + 1, ansr = r + 1, ans = r - l + 1;
                freq[casee[l] - '0']--;
                if (casee[l] - '0' == 1 && l < casee.size() && casee[l + 1] - '0' == 0)
                    freq[10]--;
                l++;
            }
        }
        cout << "Case " << i << ": ";
        if (ans == 0x3535353535)
            cout << "NO\n";
        else
            cout << "YES " << ansl << " " << ansr << '\n';
    }

    return 0;
}