// by LIFECOULDBEDREAM
// 2025/10/28 18:37

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> dist;
    int n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        dist.insert(a);
    }
    cout << dist.size();

    return 0;
}