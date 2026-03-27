// by LIFECOULDBEDREAM
// 2026/03/27 02:24

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    string _q;
    int x;
    queue<int> s;
    while (q--)
    {
        cin >> _q;
        if (_q == "push")
        {
            cin >> x;
            s.push(x);
        }
        if (_q == "pop")
        {
            s.pop();
        }
        if (_q == "front")
        {
            cout << s.front() << '\n';
        }
        if (_q == "back")
        {
            cout << s.back() << '\n';
        }
    }

    return 0;
}