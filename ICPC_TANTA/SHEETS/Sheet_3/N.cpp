// by LIFECOULDBEDREAM
// 2025/11/22 20:35

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        vector<ll> v1(a + 1, 0), v2(a + 1, 0), v3(a + 1, 0);
        vector<bool> v4(a + 1, false);
        string dummy;
        cin >> dummy;
        for (int i = 1; i <= a; i++)
            v1[i] = (ll)(dummy[i - 1] - '0');
        for (int i = 1; i <= a; i++)
            v2[i] = (v1[i] == 0 ? 1 : 0) + v2[i - 1];
        for (int i = a - 1; i >= 0; i--)
            v3[i] = v1[i + 1] + v3[i + 1];
        for (int i = 0; i <= a; i++)
        {
            if ((v2[i] >= ceil(i / 2.0)) &&
                (v3[i] >= ceil((a - i) / 2.0)))
                v4[i] = true;
        }
        pair<ll, ll> anss = {0x7fffffff, 0x7fffffff};
        for (int i = 0; i <= a; i++)
        {
            if (v4[i])
            {
                if (abs((float)((2 * i) - a)) < anss.first)
                {
                    anss.first = abs((float)((2 * i) - a));
                    anss.second = i;
                }
            }
        }
        cout << anss.second << "\n";
    }
    return 0;
}