// by LIFECOULDBEDREAM
// 2026/03/30 23:17

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, c;
    string s;
    cin >> n;
    priority_queue<int> pq;
    while (n--)
    {
        cin >> s;
        if (s == "push")
        {
            cin >> c;
            pq.push(c);
        }
        if (s == "pop")
            pq.pop();
        if (s == "top")
            cout << pq.top() << '\n';
    }

    return 0;
}