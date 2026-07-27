

// by LIFECOULDBEDREAM
// 2026/07/27 22:49

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
        int x, k;
        cin >> x >> k;
        int c1 = x / (k + 1);
        int rem = x - c1 * (k + 1);

        if (rem % k != 0)
        {
            int needed = k - (rem % k);
            if (c1 >= needed)
            {
                c1 -= needed;
                rem += needed * (k + 1);
            }
            else
            {
                cout << "-1 -1\n";
                continue;
            }
        }

        int c2 = rem / k;
        cout << c1 << " " << c2 << "\n";
    }
    return 0;
}

// // by LIFECOULDBEDREAM
// // 2026/07/27 21:21

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int ll
// int c1 = LLONG_MAX, c2 = LLONG_MAX, c3 = LLONG_MAX;
// int what_is_that(int l, int r, int x, int k)
// {
//     if (l > r)
//         return LLONG_MAX;
//     int mid = l + ((r - l) / 2);
//     if ((mid * (k + 1)) % k == 0)
//     {
//         int c = x - ((mid * (k + 1)) / k);
//         if (c > -1)
//         {
//             if (c3 < mid + c)
//                 c1 = mid, c2 = c, c3 = mid + c;
//             return c + mid;
//         }
//     }
//     else
//     {
//         int a = what_is_that(l, mid - 1, x, k);
//         int b = what_is_that(mid + 1, r, x, k);
//         return min(a, b);
//     }
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, k;
//         cin >> x >> k;
//         c3 = LLONG_MAX;
//         int ans = what_is_that(0, 1e18, x, k);
//         if (c3 == LLONG_MAX)
//             cout << "-1 -1\n";
//         else
//             cout << c1 << " " << c2 << '\n';
//     }

//     return 0;
// }