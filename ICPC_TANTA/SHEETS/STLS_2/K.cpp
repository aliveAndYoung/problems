// by LIFECOULDBEDREAM
// 2025/11/16 21:40

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string s, t, p;

        cin >> s >> t >> p;
        int subSeq = 0;
        if (s.size() > t.size())
        {
            cout << "NO\n";
            continue;
        }
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int jj = j; jj < t.size(); jj++)
            {
                if (s[i] == t[jj])
                {
                    j = jj + 1;
                    subSeq += 1;
                    break;
                }
            }
        }
        if (subSeq != s.size())
        {
            cout << "NO\n";
            continue;
        }
        map<char, int> mp;
        for (char c : p)
            mp[c]++;

        for (char c : s)
            mp[c]++;

        bool canForm = true;
        for (char c : t)
        {
            if (mp[c] > 0)
                mp[c]--;
            else
            {
                canForm = false;
                cout << "NO\n";
            }
        }
        if (canForm)
            cout << "YES\n";
    }
    return 0;
}