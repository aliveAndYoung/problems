// by LIFECOULDBEDREAM
// 2025/10/01 16:46

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, lastChecked = 0;
    cin >> n >> m;
    vector<int> a(n, 0);
    vector<int> b(m, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
    {
        bool flag = true;
        for (int j = lastChecked; j < n; j++)
        {

            if (b[i] == a[j])
            {
                lastChecked = j+1;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}