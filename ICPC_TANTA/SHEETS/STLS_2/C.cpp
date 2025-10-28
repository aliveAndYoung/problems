// by LIFECOULDBEDREAM
// 2025/10/28 18:58

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> table;
    int maxx = 0, n, curr;
    cin >> n;
    while (n--)
    {
        cin >> curr;
        if (table.count(curr) == 0)
        {
            table.insert(curr);
            maxx = max(maxx, int(table.size()));
        }
        else
        {
            table.erase(curr);
        }
    }
    cout << maxx;

    return 0;
}