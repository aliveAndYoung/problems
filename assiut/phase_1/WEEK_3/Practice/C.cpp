// by LIFECOULDBEDREAM
// 2026/05/28 12:45

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string curr, maxx = "";
    map<string, int> _mp;
    for (int i = 0; i < n - 1; i++)
    {

        curr = s.substr(i, 2);
        _mp[curr]++;
        if (_mp[curr] > _mp[maxx])
            maxx = curr;
    }
    cout << maxx << "\n";

    return 0;
}