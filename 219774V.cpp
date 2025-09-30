// by LIFECOULDBEDREAM
// 2025/09/30 23:15

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, curr, m;
    cin >> n >> m;
    vector<int> freq(1e5, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        freq[curr - 1]++;
    }
    for (int i = 0; i < m; i++)
        cout << freq[i] << "\n";

    return 0;
}