// by LIFECOULDBEDREAM
// 2026/05/28 13:04

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string _s, curr;
    map<string, int> _mp;
    string answer = "";
    cin >> _s;
    for (int i = 0; i < 10; i++)
    {
        cin >> curr;
        _mp[curr] = i;
    }
    for (int i = 0; i < _s.size(); i += 10)
    {
        answer += to_string(_mp[_s.substr(i, 10)]);
    }
    cout << answer << "\n";

    return 0;
}