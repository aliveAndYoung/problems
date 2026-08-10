// by LIFECOULDBEDREAM
// 2026/08/11 00:37

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> facts(1, 0);
    int t = 1;
    for (int i = 1; i < 15; i++)
        t = t * i, facts.push_back(t);
    vector<int> compinations(1 << 14, 0);
    for (int i = 1; i < (1 << 14); i++)
    {
        int curr = 0;
        for (int j = 0; j < 15; j++)
            if ((1 << j) & i)
                curr = curr + facts[j];
        compinations[i] = curr;
    }
    

    return 0;
}

// // by LIFECOULDBEDREAM
// // 2026/08/10 22:43

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int ll
// int solve(int s, int e, vector<int> &vv, bitset<55> curr, int start)
// {
//     int ans = LLONG_MAX;
//     if (s == e)
//         return curr.count();
//     for (int i = start; i < vv.size(); i++)
//     {
//         if (s + vv[i] <= e && !curr[i])
//         {
//             bitset<55> nneeww = curr;
//             nneeww.flip(i);
//             ans = min(solve(s + vv[i], e, vv, nneeww, i + 1), ans);
//         }
//     }
//     return ans;
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     vector<int> _v;
//     for (int i = 0; i < 40; i++)
//         _v.push_back(1LL << i);
//     for (int i = 1; i < 16; i++)
//         t = t * i, _v.push_back(t);
//     sort(_v.begin(), _v.end());
//     _v.erase(unique(_v.begin(), _v.end()), _v.end());
//     cin >> t;

//     while (t--)
//     {
//         int n, a;
//         cin >> n;
//         const int N = _v.size();
//         bitset<55> cu = 0;
//         a = solve(0, n, _v, cu, 0);
//         if (a == LLONG_MAX)
//             cout << "-1\n";
//         else
//             cout << a << '\n';
//     }

//     return 0;
// }