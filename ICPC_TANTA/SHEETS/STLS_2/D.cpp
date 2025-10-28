// by LIFECOULDBEDREAM
// 2025/10/28 19:43

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, edgeCase = 0;
    cin >> n >> m;
    vector<int> freq((2 * 1e5) + 2, -1); // last index
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        freq[a] = i;
        ((m % 2) == 0) && ((m / 2) == a) && (edgeCase == 1) && (cout << a << " " << i, edgeCase++);
        
    }

    return 0;
}