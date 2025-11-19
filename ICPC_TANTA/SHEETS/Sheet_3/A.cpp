// by LIFECOULDBEDREAM
// 2025/11/19 18:03

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    char a;
    cin >> n;
    map<char, int> mp;
    while (n--)
    {
        cin >> a;
        mp[a]++;
    }
    for (auto &it : mp)
    {
        if (it.second > 1 || mp.size() < 2)
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";

    return 0;
}