// by LIFECOULDBEDREAM
// 2025/10/17 21:58

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int operations = 0;
    cin >> operations;
    bool reversed = false;
    deque<char> dq;
    for (char c : s)
        dq.push_back(c);
    while (operations--)
    {
        int a;
        cin >> a;
        (a == 1) && (reversed = !reversed, 1);
        if (a == 2)
        {
            int pos;
            char c;
            cin >> pos >> c;
            if ((pos == 1 && !reversed) || (pos == 2 && reversed))
                dq.push_front(c);
            else
                dq.push_back(c);
        }
    }
    if (reversed)
        reverse(dq.begin(), dq.end());
    for (char c : dq)
        cout << c;
    return 0;
}