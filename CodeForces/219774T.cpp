// by LIFECOULDBEDREAM
// 2025/10/01 17:16

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, diag1 = 0, diag2 = 0, curr;

    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> curr;
            (i == j) && (diag1 += curr);
            ((i + j) == (n - 1)) && (diag2 += curr);
        }
    }
    cout << abs(diag1 - diag2);

    return 0;
}