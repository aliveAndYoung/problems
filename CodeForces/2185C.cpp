// by LIFECOULDBEDREAM
// 2026/02/08 02:21

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 1, curr_run = 1;
        for (int i = 0; i < n-1; i++)
        {
           if(v[i+1] - v[i] == 1)
           {
               curr_run++;
               ans = max(ans, curr_run);
           }
           else if( v[i+1] - v[i] == 0  ){
            continue;
           }else
           {
               curr_run = 1;
           }
               
        }

        cout << ans << '\n';
    }

    return 0;
}