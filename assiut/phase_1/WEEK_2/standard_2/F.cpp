// by LIFECOULDBEDREAM
// 2026/03/27 02:26

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    deque<int> _dq;
    string query;
    int x;
    while (q--)
    {
        cin >> query;
        if (query == "push_back")
        {
            cin >> x;
            _dq.push_back(x);
        }
        if (query == "push_front")
        {
            cin >> x;
            _dq.push_front(x);
        }
        if (query == "pop_front")
        {
            _dq.pop_front();
        }
        if (query == "pop_back")
        {
            _dq.pop_back();
        }
        if (query == "front")
        {
            cout << _dq.front() << '\n';
        }
        if (query == "back")
        {
            cout << _dq.back() << '\n';
        }
        if (query == "print")
        {
            cin >> x;
            cout << _dq[x - 1] << '\n';
        }
    }

    return 0;
}