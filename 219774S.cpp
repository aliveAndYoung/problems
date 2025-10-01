// by LIFECOULDBEDREAM
// 2025/10/01 17:11

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, l, curr, checked;
    cin >> n >> m;
    l = n * m;
    vector<short> freq(1e5, 0);
    while (l--)
    {
        cin >> curr;
        freq[curr - 1]++;
    }
    cin >> checked;
    (freq[checked - 1] == 0) ? cout << "will take number" : cout << "will not take number";

    return 0;
}