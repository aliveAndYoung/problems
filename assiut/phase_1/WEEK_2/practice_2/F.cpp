// by LIFECOULDBEDREAM
// 2026/04/07 00:36

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (cin >> s)
    {
        list<char> _l;
        auto _it = _l.begin();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                _it = _l.begin();
            }
            else if (s[i] == ']')
            {
                _it = _l.end();
            }
            else
            {
                _l.insert(_it, s[i]);
            }
        }
        for (auto it = _l.begin(); it != _l.end(); it++)
            cout << *it;
        cout << '\n';
    }

    return 0;
}