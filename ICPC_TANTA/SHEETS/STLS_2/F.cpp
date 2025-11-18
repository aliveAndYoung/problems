// by LIFECOULDBEDREAM
// 2025/11/16 16:26

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string t, s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        t = s.substr(i, 2);
        mp[t]++;
    }
    int max = 0;
    for (auto it : mp)
    {
        if (it.second > max)
        {

            max = it.second;
            t = it.first;
        }
    }
    cout << t << "\n";

    return 0;
}