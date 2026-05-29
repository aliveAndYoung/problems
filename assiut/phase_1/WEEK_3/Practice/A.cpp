// by LIFECOULDBEDREAM
// 2026/05/28 12:24

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> _mp;
    string curr;
    while (n--)
    {
        cin >> curr;
        if (_mp[curr] == 0)
        {
            _mp[curr] = 1;
            cout << "OK\n";
        }
        else
        {
            cout << curr << _mp[curr] << "\n";
            _mp[curr]++;
        }
    }

    return 0;
}