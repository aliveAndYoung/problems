// by LIFECOULDBEDREAM
// 2026/05/29 11:57

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        map<int, map<char, int>> mp;
        // id -> (char -> count)
        int curr;
        vector<int> _v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> _v[i];
            mp[_v[i]][s[i]]++;
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (mp[_v[i]][t[i]] > 0)
                mp[_v[i]][t[i]]--;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}