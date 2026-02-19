// by LIFECOULDBEDREAM
// 2026/02/18 19:59

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> _v(n + 1);
        _v[0] = 0;
        ll sum = 0;
        for (int i = 1; i <= n; i++)
            cin >> _v[i], sum += _v[i];
        int l = 1, r = n, _sum = sum, sum_ = sum;
        if (sum % x != 0)
        {
            cout << n << "\n";
        }
        else
        {
            int left_ans = -2, right_ans = -2;
            while (l < r)
            {
                _sum = _sum - _v[l];
                if (_sum % x != 0)
                {
                    left_ans = r - l;
                    break;
                }
                l++;
            }
            l = 1, r = n;
            while (l < r)
            {
                sum_ = sum_ - _v[r];
                if (sum_ % x != 0)
                {
                    right_ans = r - l;
                    break;
                }
                r--;
            }
            cout << max(-1, max(left_ans, right_ans)) << "\n";
        }
    }

    return 0;
}