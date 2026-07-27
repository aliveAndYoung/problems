
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <map>
using namespace __gnu_pbds;
using namespace std;

#define naruto_z_z std::ios_base::sync_with_stdio(false), std::cin.tie(0);
#define endl '\n'
#define loop0(i, n) for (int i = 0; i < (n); ++i)
#define loop1(i, n) for (int i = 1; i < (n); ++i)
using ll = long long;
using ull = unsigned long long;
template <typename T>
using vec = vector<T>;
template <typename T>
using matrix = vector<vector<T>>;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename Key, typename Val>
using ordered_map = tree<Key, Val, less<Key>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<set<int>> _v1(n);
    ordered_multiset<int> ans;
    char curr;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            cin >> curr;
            if (curr == '1')
                _v1[i].insert(j);
        }
    }
    for (int i = 0; i < n; i++)
        ans.insert(*_v1[i].begin());

    int r, c, num;
    for (int i = 0; i < q; i++)
    {
        cin >> num;
        if (num == 2)
        {
            cin >> r;
            c = ans.size() - ans.order_of_key(r);
            cout << c - 1 << endl;
        }
        else
        {
            cin >> r >> c;
            if (!_v1[r].empty())
                ans.erase(ans.find(*_v1[r].begin()));
            if (_v1[r].count(c))
                _v1[r].erase(c);
            else
                _v1[r].insert(c);
            if (!_v1[r].empty())
                ans.insert(*_v1[r].begin());
        }
    }
}

int main()
{
    naruto_z_z int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
