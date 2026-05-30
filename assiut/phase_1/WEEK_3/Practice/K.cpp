// by LIFECOULDBEDREAM
// 2026/05/29 10:36

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> _v;
        priority_queue<int, vector<int>, greater<int>> _pq;
        int curr, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> curr;
            if (_pq.size() == m)
            {
                temp = _pq.top(), _v.push_back(temp), _pq.pop();
            }
            _pq.push(curr);
        }
        while (_pq.size() > 0)
        {
            temp = _pq.top(), _v.push_back(temp), _pq.pop();
        }
        cout << _v[k - 1] << "\n";
    }

    return 0;
}

// 7

// 6 3 4
// 1 2 4 7 6 3

// 1 1 1
// 42

// 5 3 1
// 9 9 9 9 9

// 3 2 3
// 10 30 20

// 5 2 3
// 5 4 3 2 1

// 7 4 5
// 1000000000 5 1000000000 12 5 1 3

// 10 4 7
// 15 2 8 14 1 7 12 3 9 6

// 3
// 42
// 9
// 30
// 3
// 5
// 9
