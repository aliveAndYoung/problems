// by LIFECOULDBEDREAM
// 2025/11/16 21:22

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<string> sta;
    set<string> set;
    string curr;
    while (n--)
    {
        cin >> curr;
        sta.push(curr);
    }
    while (!sta.empty())
    {
        curr = sta.top();
        sta.pop();
        if (set.count(curr) == 0)
        {
            set.insert(curr);
            cout << curr << "\n";
        }
    }

    return 0;
}