// by LIFECOULDBEDREAM
// 2025/11/18 22:30

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d, e;
        cin >> a >> b;
        map<int, int> start;
        map<int, int> end;
        for (int i = 1; i <= a; i++)
        {
            cin >> c;
            if (start[c] == 0)
                start[c] = i;
            else
                start[c] = min(start[c], i);
            if (end[c] == 0)
                end[c] = i;
            else
                end[c] = max(end[c], i);
        }
        while (b--)
        {
            cin >> d >> e;
            if (start[d] == 0 || end[e] == 0)
            {
                cout << "NO\n";
                continue;
            }
            if (start[d] < end[e])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
