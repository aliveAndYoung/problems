// by LIFECOULDBEDREAM
// 2026/04/07 00:44

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    stack<char> _s;
    map<char, char> m_ = {{')', '('}, {']', '['}, {'}', '{'}};
    for (int i = 0; i < s.size(); i++)
    {
        if (m_.count(s[i]))
        {
            if ( !_s.empty() && _s.top() == m_[s[i]])
            {
                _s.pop();
            }
            else
            {
                cout << "no\n";
                return 0;
            }
        }
        else
        {
            _s.push(s[i]);
        }
    }
    if (_s.empty())
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}