// by LIFECOULDBEDREAM
// 2025/11/21 09:17

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<vector<ll>> v(1000 + 1, vector<ll>(1000 + 1, 0));
        for (int i = 0; i < a; i++)
        {
            int l, w;
            cin >> l >> w;
            v[l][w] += (ll)l * w;
        }
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                v[i][j] += v[i][j - 1];
            }
        }
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                v[i][j] += v[i - 1][j];
            }
        }
        for (int i = 0; i < b; i++)
        {
            int hs, ws, hb, wb;
            cin >> hs >> ws >> hb >> wb;
            cout << v[hb - 1][wb - 1] - v[hs][wb - 1] - v[hb - 1][ws] + v[hs][ws] << "\n";
        }
    }

    return 0;
}