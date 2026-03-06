// by LIFECOULDBEDREAM
// 2026/03/06 22:22

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct _cus
{
    int left = 0, right = 0, ceil = 0;
};
int stupid_formula(int S)
{
    return (sqrt(8 * S + 1) - 1) / 2;
}
int max_floor(int l, int r, int c)
{

    int ans = min(stupid_formula(l), min(stupid_formula(r), stupid_formula(c) + 1));
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<_cus> count(s.length() + 1, {0, 0, 0});
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i - 1] == '\\')
            count[i].left++;
        else if (s[i - 1] == '/')
            count[i].right++;
        else if (s[i - 1] == '_')
            count[i].ceil++;
    }
    for (int i = 1; i <= s.length(); i++)
    {
        count[i].left += count[i - 1].left;
        count[i].right += count[i - 1].right;
        count[i].ceil += count[i - 1].ceil;
    }
    int q;
    cin >> q;
    int l, r;
    while (q--)
    {
        cin >> l >> r;
        cout << max_floor(count[r].left - count[l - 1].left, count[r].right - count[l - 1].right, count[r].ceil - count[l - 1].ceil) << '\n';
    }

    return 0;
}