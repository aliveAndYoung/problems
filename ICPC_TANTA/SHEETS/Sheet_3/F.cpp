// by LIFECOULDBEDREAM
// 2025/11/19 20:34

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a;
    cin >> n >> a;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        v[i] = v[i] ^ v[i - 1];
    while (a--)
    {
        int b, c;
        cin >> b >> c;
        cout << (v[c] ^ v[b - 1]) << "\n";
    }

    return 0;
}