// by LIFECOULDBEDREAM
// 2025/10/18 16:18

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    vector<pair<int, int>> intervals(q);
    for (int i = 0; i < q; i++)
        cin >> intervals[i].first >> intervals[i].second;
    sort(intervals.begin(), intervals.end());
    int start = intervals[0].first, end = intervals[0].second;
    for (pair<int, int> interval : intervals)
    {
        if (interval.first <= end)
            end = max(end, interval.second);
        else
        {
            cout << start << " " << end << " \n";
            start = interval.first;
            end = interval.second;
        }
    }
    cout << start << " " << end;

    return 0;
}