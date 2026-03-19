// by LIFECOULDBEDREAM
// 2026/02/27 01:15

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> found, removed;
    for (int i = 0; i < n; i++)
        found[s[i]]++;
    for (auto [ch, cnt] : found)
    {
        if (k)
        {
            if (k > cnt)
            {
                removed[ch] += cnt;
                k -= cnt;
                cnt = 0;
            }
            else
            {
                removed[ch] += k;
                cnt -= k;
                k = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (removed[s[i]] == 0)
            cout << s[i];
        else
            removed[s[i]]--;
    }
    cout << endl;

    return 0;
}