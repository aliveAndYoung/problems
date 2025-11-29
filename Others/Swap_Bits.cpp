// by LIFECOULDBEDREAM
// 2025/11/29 18:18

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int c)
{
    int mul{}, div{}, num{};
    for (int i = 0; i < 32; i+=2)
    {
        int bit1 = ((c>>(i+1))&1);
        int bit2 = (c>>i&1);
        num|=(bit1<<i);
        num|=(bit2<<(i+1));
    }
    cout << num << " ";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, curr;
    cin >> n;
    while (n--)
    {
        cin >> curr;
        solve(curr);
    }

    return 0;
}