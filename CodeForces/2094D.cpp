// by LIFECOULDBEDREAM
// 2026/02/08 21:52

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;
        vector<pair<int, char>> __p, __s;
        int i = 1;
        __p.push_back({1, p[0]});
        while (i < p.length())
        {
            if (p[i] == __p[__p.size() - 1].second)
            {
                __p[__p.size() - 1].first++;
                i++;
            }
            else
            {
                __p.push_back({1, p[i]});
                i++;
            }
        }
        int ii = 1;
        __s.push_back({1, s[0]});
        while (ii < s.length())
        {
            if (s[ii] == __s[__s.size() - 1].second)
            {
                __s[__s.size() - 1].first++;
                ii++;
            }
            else
            {
                __s.push_back({1, s[ii]});
                ii++;
            }
        }

        if (__p.size() == __s.size())
        {
            bool flag = true;
            for (int i = 0; i < __p.size(); i++)
            {
                if (__p[i].first > __s[i].first || __p[i].first * 2 < __s[i].first || __p[i].second != __s[i].second)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
// 1 LLLLLRL LLLLRRLL
// 1 LR LLLR