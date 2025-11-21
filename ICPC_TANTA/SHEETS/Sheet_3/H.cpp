// by LIFECOULDBEDREAM
// 2025/11/20 12:00

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    set<int> s;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = n; i > 0; i--)
    {
        s.insert(v[i]);
        v[i] = s.size();
    }
    int q;
    while (m--)
    {
        cin >> q;
        cout << v[q] << "\n";
    }

    return 0;
}