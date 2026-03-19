// by LIFECOULDBEDREAM
// 2026/02/27 01:41

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> mp1;
    for (int i = 0; i < s1.size(); i++)
        if (s1[i] != ' ')
            mp1[s1[i]]++;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != ' ')
        {
            if (mp1[s2[i]] > 0)
            {
                mp1[s2[i]]--;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";

    return 0;
}