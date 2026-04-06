// by LIFECOULDBEDREAM
// 2026/04/07 00:22

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
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (_s.empty() || _s.top() != s[i])
            _s.push(s[i]);
        else
            _s.pop();
    }
    while (!_s.empty())
    {
        cout << _s.top();
        _s.pop();
    }

    return 0;
}