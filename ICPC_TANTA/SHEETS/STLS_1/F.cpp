// by LIFECOULDBEDREAM
// 2025/10/17 17:55

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    priority_queue<int, vector<int>, greater<int>> min_pq;
    cin >> a;
    string command;
    while (a--)
    {
        cin >> command;
        if (command == "push")
        {
            int x;
            cin >> x;
            min_pq.push(x);
        }
        else if (command == "top")
        {
            if (!min_pq.empty())
            {
                cout << min_pq.top() << "\n";
            }
        }
        else if (command == "pop")
        {
            if (!min_pq.empty())
            {
                min_pq.pop();
            }
        }
        }
    return 0;
}