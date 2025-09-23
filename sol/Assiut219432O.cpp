// by LIFECOULDBEDREAM
// 2025/09/23 17:24

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string out = "*";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << out << "\n";
        out += '*';
    }

    return 0;
}