// by LIFECOULDBEDREAM
// 2026/03/06 21:09

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _v(n), ans(m);
    int sum = 0, curr = 0;
    priority_queue<pair<int, int>> _pq;
    for (int i = 0; i < n; i++)
    {
        cin >> _v[i];
        _pq.push({_v[i], i + 1});
    }
    for (int i = 0; i < m; i++)
    {
        ans[i] = _pq.top().second;
        sum += _pq.top().first;
        _pq.pop();
    }
    sort(ans.begin(), ans.end());
    cout << sum << '\n';
    for (int i = 0; i < m; i++)
    {
        if( i == m-1 ){
            cout << n - curr;
            break;
        }
        cout << ans[i] - curr << ' ';
        curr = ans[i];
    }
    return 0;
}