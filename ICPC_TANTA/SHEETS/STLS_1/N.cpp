// by LIFECOULDBEDREAM
// 2025/10/18 10:35

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    queue<pair<ll, ll>> cyl;

    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            ll x, c;
            cin >> x >> c;
            cyl.push({x, c});
        }
        else if (t == 2)
        {
            ll c;
            cin >> c;
            ll sum = 0;

            while (c > 0)
            {
                auto front = cyl.front();
                if (front.second <= c)
                {
                    sum += front.first * front.second;
                    c -= front.second;
                    cyl.pop();
                }
                else
                {
                    sum += front.first * c;
                    cyl.front().second -= c;
                    c = 0;
                }
            }

            cout << sum << "\n";
        }
    }

    return 0;
}

//  TLE

// ll q;
// cin >> q;
// queue<int> cyl;
// for (int i = 0; i < q; i++)
// {
//     int t;
//     cin >> t;
//     if (t == 1)
//     {
//         int a, b;
//         cin >> a >> b;
//         for (int i = 0; i < b; i++)
//             cyl.push(a);
//     }
//     else if (t == 2)
//     {
//         int sum = 0, a;
//         cin >> a;
//         for (int i = 0; i < a; i++)
//         {
//             sum += cyl.front();
//             cyl.pop();
//         }
//         cout << sum << "\n";
//     }
// }
