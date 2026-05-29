// by LIFECOULDBEDREAM
// 2026/05/28 12:28

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    deque<ll> _dq;
    priority_queue<ll> _pq;
    ll curr;
    while (n--)
    {
        cin >> curr;
        _dq.push_back(curr);
    }
    cin >> n;
    char c;
    while (n--)
    {
        cin >> c;
        if (c == 'L' && _dq.size() > 0)
        {
            curr = _dq.front();
            _dq.pop_front();
            _pq.push(curr);
        }
        else if (c == 'R' && _dq.size() > 0)
        {
            curr = _dq.back();
            _dq.pop_back();
            _pq.push(curr);
        }
        else if (c == 'Q')
        {
            if (_pq.size() > 0)
            {
                curr = _pq.top();
                _pq.pop();
                cout << curr << '\n';
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}