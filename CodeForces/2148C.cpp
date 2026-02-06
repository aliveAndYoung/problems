// by LIFECOULDBEDREAM
// 2026/02/04 01:29

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
        int n, m, curr_min = 0, curr_end = 0, a, b, points = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if ((a - curr_min) % 2 == 0)
            {
                if (curr_end == b)
                {
                    points = points + (a - curr_min);
                }
                else
                {
                    points = points + (a - curr_min) - 1;
                }
            }
            else
            {
                if (curr_end == b)
                {
                    points = points + (a - curr_min) - 1;
                }
                else
                {
                    points = points + (a - curr_min);
                }
            }
            curr_min = a;
            curr_end = b;
        }
        if (curr_min != m)
            points = points + (m - curr_min);
        cout << points << "\n";
    }

    return 0;
}