// by LIFECOULDBEDREAM
// 2026/02/08 03:46

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
        vector<pair<int, char>> nl(n + m);
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            nl[i] = {temp, 'R'};
        }
        for (int i = n; i < m + n; i++)
        {
            cin >> temp;
            nl[i] = {temp, 'S'};
        }
        sort(nl.begin(), nl.end());
        int curr_robot = 1;
        ll last_spike = -0x7fffffff;
        map<int, pair<ll, ll>> mp;
        for (int i = 0; i < n + m; i++)
        {
            if (nl[i].second == 'R')
            {
                mp[curr_robot].first = last_spike - nl[i].first;
                curr_robot++;
            }
            else
            {
                last_spike = nl[i].first;
            }
        }
        curr_robot = n;
        last_spike = 0x7fffffff;
        for (int i = n + m - 1; i >= 0; i--)
        {
            if (nl[i].second == 'R')
            {
                mp[curr_robot].second = last_spike - nl[i].first;
                curr_robot--;
            }
            else
            {
                last_spike = nl[i].first;
            }
        }
        vector<pair<ll, ll>> nearst_left(n), nearst_right(n);
        for (int i = 1; i <= n; i++)
        {
            nearst_left[i - 1] = {mp[i].first, i};
            nearst_right[i - 1] = {mp[i].second, i};
        }

        sort(nearst_left.begin(), nearst_left.end(), greater<pair<ll, ll>>());
        sort(nearst_right.begin(), nearst_right.end());
        int curr_pos = 0;
        string ins;
        cin >> ins;

        for (char c : ins)
        {
            if (c == 'R')
            {
                curr_pos++;
                while (nearst_right.size() && nearst_right[0].first <= curr_pos)
                {
                    mp.erase(nearst_right[0].second);
                    nearst_right.erase(nearst_right.begin());
                }
            }
            else
            {
                curr_pos--;
                while (nearst_left.size() && nearst_left[0].first >= curr_pos)
                {
                    mp.erase(nearst_left[0].second);
                    nearst_left.erase(nearst_left.begin());
                }
            }
            cout << mp.size() << ' ';
        }
        cout << '\n';
    }

    return 0;
}
// 1 2 3 3 2 4 1 3 5 LRL
// 1 3 2 3 1 3 7 9 6 RRL