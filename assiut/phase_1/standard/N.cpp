// by LIFECOULDBEDREAM
// 2026/03/05 15:17

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i].first >> _v[i].second;
    sort(_v.begin(), _v.end());
    int curr_start = _v[0].first, curr_end = _v[0].second;
    for (int i = 1; i < n; i++){
        if (_v[i].first > curr_end){
            cout << curr_start << " " << curr_end << "\n";
            curr_start = _v[i].first;
            curr_end = _v[i].second;
        }
        else if (_v[i].second > curr_end)
            curr_end = _v[i].second;
    }
    cout << curr_start << " " << curr_end << "\n";
    return 0;
}