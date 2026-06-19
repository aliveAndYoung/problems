// by LIFECOULDBEDREAM
// 2026/06/19 21:12

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _a(n), ans;
    multiset<int> _ms;
    int curr;
    for (int i = 0; i < n; i++)
        cin >> _a[i];
    for (int i = 0; i < m; i++)
        cin >> curr, _ms.insert(curr);

    for (int i = 0; i < n; i++)
    {
        auto it = _ms.lower_bound(_a[i]);
        int val = *it;
        if (val == _a[i])
            _ms.erase(it);
        else if (it == _ms.begin())
            ans.push_back(i + 1);
        else
            it--, _ms.erase(it);
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}