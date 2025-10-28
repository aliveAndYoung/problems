// by LIFECOULDBEDREAM
// 2025/10/28 18:41

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<string> poss;
    string curr;
    while (n--)
    {
        cin >> curr;
        if (poss.count(curr) == 0)
            poss.insert(curr), cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}