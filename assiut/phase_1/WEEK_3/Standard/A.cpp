// by LIFECOULDBEDREAM
// 2026/05/25 14:10

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> _s;
    int n;
    cin >> n;
    string comm;
    int temp;
    while (n--)
    {
        cin >> comm;
        if (comm == "insert")
        {
            cin >> temp;
            _s.insert(temp);
        }
        else if (comm == "find")
        {
            cin >> temp;
            if (_s.count(temp))
                cout << "found\n";
            else
                cout << "not found\n";
        }
        else if (comm == "upper_bound")
        {
            cin >> temp;
            auto it = _s.upper_bound(temp);
            if (it == _s.end())
                cout << "-1\n";
            else
                cout << *it << "\n";
        }
        else if (comm == "lower_bound")
        {
            cin >> temp;
            auto it = _s.lower_bound(temp);
            if (it == _s.end())
                cout << "-1\n";
            else
                cout << *it << "\n";
        }
    }
    return 0;
}