// by LIFECOULDBEDREAM
// 2026/02/08 02:57

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
        int n, m, h;
        cin >> n >> m >> h;
        vector<ll> v1(n), v2(n);
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        int b, c;
        v2 = v1;
        set<int> modified;
        for (int i = 0; i < m; i++)
        {
            cin >> b >> c;
            b--;
            if (v2[b] + c <= h)
            {
                v2[b] += c;
                modified.insert(b);
            }
            else
            {
                for (int i : modified)
                    v2[i] = v1[i];
                modified.clear();
            }
        }
        for (int i = 0; i < n; i++)
            cout << v2[i] << " ";
        cout << '\n';
    }

    return 0;
}