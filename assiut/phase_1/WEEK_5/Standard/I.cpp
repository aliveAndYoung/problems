// by LIFECOULDBEDREAM
// 2026/07/02 17:19

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, b, c;
    cin >> n >> m;
    string curr;
    string var;
    string var1;
    string var2;
    string var3;
    map<string, int> _mp_big;
    map<string, int> _mp_small;
    while (n--)
    {
        cin >> var;
        cin >> curr;
        cin >> curr;
        if (curr[0] == '0' || curr[0] == 1)
        {
            a = 0;
            for (int i = 0; i < m; i++)
            {
                if (curr[i] == '1')
                    a = a + (1 << i);
            }
            _mp_big[curr] = a;
            _mp_small[curr] = a;
        }
        else
        {
            cin >> var2 >> var3;
            var1 = curr;
        }
    }
    kosomaha yasta fakes

    return 0;
}