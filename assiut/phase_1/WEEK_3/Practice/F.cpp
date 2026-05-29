// by LIFECOULDBEDREAM
// 2026/05/28 13:12

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<string> _sta;
    set<string> _set;
    string curr;
    while (n--)
    {
        cin >> curr;
        _sta.push(curr);
    }
    while (!_sta.empty())
    {
        if (_set.count(_sta.top()) == 0)
        {
            _set.insert(_sta.top());
            cout << _sta.top() << "\n";
        }
        _sta.pop();
    }

    return 0;
}