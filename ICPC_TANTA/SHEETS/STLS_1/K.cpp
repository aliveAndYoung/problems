// by LIFECOULDBEDREAM
// 2025/10/18 09:19

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
        int a;
        cin >> a;
        deque<int> dq;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            if (x <= dq.front() || dq.empty())
                dq.push_front(x);
            else
                dq.push_back(x);
        }
        for (auto it : dq)
            cout << it << " ";
        cout << "\n";
    }

    return 0;
}