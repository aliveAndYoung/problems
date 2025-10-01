// by LIFECOULDBEDREAM
// 2025/10/01 17:46

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int>
        row(m, 0);
    while (n--)
    {
        for (int i = m - 1; i >= 0; i--)
            cin >> row[i];
        for (int ab : row)
            cout << ab << " ";

        cout << "\n";
    }

    return 0;
}