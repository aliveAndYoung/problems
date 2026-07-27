// by LIFECOULDBEDREAM
// 2026/07/24 22:15

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> ws(10);
    for (int i = 0; i < 10; i++)
        cin >> ws[i];
    vector<int> sums(n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> temp;
            sums[i] += temp * ws[j];
        }
    }
    sort(sums.begin(), sums.end(), greater<int>());
    temp = 0;
    for (int i = 0; i < k; i++)
        temp = temp + sums[i];
    cout << temp;
    return 0;
}