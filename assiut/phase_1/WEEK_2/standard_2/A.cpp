// by LIFECOULDBEDREAM
// 2026/03/19 01:47

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q, l, r, m;
    string s, curr;
    char c;
    cin >> n >> q >> s;
    while (q--)
    {
        cin >> curr;
        if (curr == "pop_back")
        {
            s.pop_back();
        }
        else if (curr == "front")
        {
            cout << s[0] << "\n";
        }
        else if (curr == "back")
        {
            cout << s[s.size() - 1] << "\n";
        }
        else if (curr == "sort")
        {
            cin >> l >> r;
            m = min(l, r);
            r = max(l, r);
            l = m;
            l--;
            sort(s.begin() + l, s.begin() + r);
        }
        else if (curr == "reverse")
        {
            cin >> l >> r;
            m = min(l, r);
            r = max(l, r);
            l = m;
            l--;
            reverse(s.begin() + l, s.begin() + r);
        }
        else if (curr == "print")
        {
            cin >> r;
            cout << s[r - 1] << "\n";
        }
        else if (curr == "substr")
        {
            cin >> l >> r;
            m = min(l, r);
            r = max(l, r);
            l = m;
            cout << s.substr(l - 1, r - l + 1) << "\n";
        }
        else if (curr == "push_back")
        {
            cin >> c;
            s += c;
        }
    }

    return 0;
}