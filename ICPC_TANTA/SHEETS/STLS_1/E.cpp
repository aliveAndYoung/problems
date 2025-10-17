// by LIFECOULDBEDREAM
// 2025/10/17 17:44

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    priority_queue<int> pq;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        else if (s == "insert")
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (s == "extract")
        {
            if (!pq.empty())
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}