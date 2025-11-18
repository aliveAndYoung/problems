// by LIFECOULDBEDREAM
// 2025/11/16 16:02

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q, x;
    cin >> n >> q;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ms.insert(x);
    }
    while (q--)
    {
        cin >> x;
        if (x == 0)
        {
            int a;
            cin >> a;
            ms.insert(a);
        }
        else if (x == 1)
        {
            cout << *ms.begin() << "\n";
            ms.erase(ms.begin());
        }
        else
        {
            cout << *ms.rbegin() << "\n";
            auto it = ms.end();
            it--;
            ms.erase(it);
        }
    }
    return 0;
}