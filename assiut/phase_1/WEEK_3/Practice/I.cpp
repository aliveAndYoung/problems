// by LIFECOULDBEDREAM
// 2026/05/29 09:02

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> _cached(31);
    for (int i = 0; i < 31; i++)
        _cached[i] = (1 << i);
    map<int, int> _mp;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        _mp[curr] = _mp[curr] + 1;
    }
    int ans = 0, comp;
    for (auto it = _mp.begin(); it != _mp.end(); it++)
    {
        curr = it->first;
        bool flag = true;
        for (int i = 0; i < 31; i++)
        {
            comp = _cached[i] - curr;
            if (comp == curr)
            {
                if (_mp.find(comp) != _mp.end() && _mp[comp] > 1)
                {
                    flag = false;
                    break;
                }
            }
            else if (_mp.find(comp) != _mp.end() && _mp[comp] > 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans = ans + it->second;
    }
    cout << ans;
    return 0;
}