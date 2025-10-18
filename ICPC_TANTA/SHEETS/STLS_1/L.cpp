// by LIFECOULDBEDREAM
// 2025/10/18 09:52

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    int p1 = 0, p2 = 0;
    bool turn_1 = true;
    while (!dq.empty())
    {
        if (turn_1)
        {
            if (dq.front() >= dq.back())
            {
                p1 += dq.front();
                dq.pop_front();
            }
            else
            {
                p1 += dq.back();
                dq.pop_back();
            }
        }
        else
        {
            if (dq.front() >= dq.back())
            {
                p2 += dq.front();
                dq.pop_front();
            }
            else
            {
                p2 += dq.back();
                dq.pop_back();
            }
        }
        turn_1 = !turn_1;
    }
    {
        cout << p1 << " " << p2 << "\n";
    }

    return 0;
}