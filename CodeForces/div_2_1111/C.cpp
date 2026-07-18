// by LIFECOULDBEDREAM
// 2026/07/18 18:36

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> _a(n), _b(n);
        for (int i = 0; i < n; i++)
            cin >> _a[i];
        for (int i = 0; i < n; i++)
            cin >> _b[i];
        if (_a == _b)
        {
            cout << "0\n";
        }
        else
        {
            int count = 0;
            bool has_valid_1 = false, has_valid_0 = false;
            for (int i = 0; i < n; i++)
            {
                if ((_a[i] == 1) && (_b[i] == 1))
                    has_valid_1 = 1;
                if ((_a[i] == 0) && (_b[i] == 0))
                    has_valid_0 = 1;
                if ((_a[i] == 1) && (_b[i] == 0))
                    count++;
            }
            if (count == 0)
            {
                if (has_valid_0 && has_valid_1)
                    cout << "2\n";
                else
                    cout << "-1\n";
            }
            else
            {
                if (count % 2 == 1)
                    cout << "1\n";
                else
                    cout << "2\n";
            }
        }
    }

    return 0;
}