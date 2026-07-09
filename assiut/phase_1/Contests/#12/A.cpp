// by LIFECOULDBEDREAM
// 2026/07/09 07:57

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
        string s;
        cin >> s;
        if (s.size() < 3)
        {
            cout << 0 << '\n';
            continue;
        }
        string temp;
        int l = 0, r = s.size(), mid, a, b, c, ans0 = 1e8, ans1 = 1e8;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            a = mid;
            temp = s;

            for (int i = 1; i < s.size() - 1; i++)
                if (a && temp[i] == '0')
                    temp[i] = '1', a--;
            if (temp[0] == '0' && temp[s.size() - 1] == '0' && a)
                temp[0] = '1';
            b = 0;
            for (int i = 0; i < s.size(); i++)
                if (temp[i] == '0')
                    b++;
            if (temp[0] == '0' && temp[s.size() - 1] == '0')
                b++;

            if (b)
                l = mid + 1;
            else
                ans0 = min(ans0, mid), r = mid - 1;
        }
        l = 0, r = s.size();
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            a = mid;
            temp = s;

            for (int i = 1; i < s.size() - 1; i++)
                if (a && temp[i] == '1')
                    temp[i] = '0', a--;
            if (temp[0] == '1' && temp[s.size() - 1] == '1' && a)
                temp[0] = '0';
            b = 0;
            for (int i = 1; i < s.size() - 1; i++)
                if (temp[i] == '1')
                    b++;
            if (temp[0] == '1' && temp[s.size() - 1] == '1')
                b++;

            if (b)

                l = mid + 1;
            else
                ans1 = min(ans1, mid), r = mid - 1;
        }
        cout << min(ans0, ans1) << '\n';
    }

    return 0;
}