// by LIFECOULDBEDREAM
// 2025/10/28 18:58

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int table = 0, maxx = 0, n, curr;
    vector<int> bag(1e5 + 5, 0);
    cin >> n;
    n *= 2;
    while (n--)
    {
        cin >> curr;
        bag[curr]++;
        if (bag[curr] > 1)
            table--;
        else
        {
            table++;
            maxx = max(maxx, table);
        }
    }

    cout << maxx;

    return 0;
}