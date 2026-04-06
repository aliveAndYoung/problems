// by LIFECOULDBEDREAM
// 2026/03/31 17:03

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int x, a;
    queue<int> _q;
    while (n--)
    {
        cin >> a >> x;
        if (a == 1)

            _q.push(x);

        else
        {
            if (_q.front() == x)
                cout << "Yes\n";
            else
                cout << "No\n";
            _q.pop();
        }
    }

    return 0;
}