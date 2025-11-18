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
        int j = 0, i = 0;
        while (i < int(s.size()) && j < int(t.size()))
        {
            if (s[i] == t[j])
            {
                subSeq++;
                i++;
            }
            j++;
        }

        if (subSeq != s.size())
        {
            cout << "NO\n";
            continue;
        }
        vector<int> freq(26, 0);
        for (char &c : p)
            freq[int(c) - int('a')]++;

        for (char &c : s)
            freq[int(c) - int('a')]++;
        for (char &c : t)
            freq[int(c) - int('a')]--;
        bool possible = true;
        for (int &count : freq)
        {
            if (count < 0)
            {
                possible = false;
            }
        }
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}