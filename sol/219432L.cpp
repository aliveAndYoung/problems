// by LIFECOULDBEDREAM
// 2025/09/25 20:12

#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
        return abs(a);
    return GCD(b, a % b);
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int _a, _b;
    cin >> _a >> _b;
    cout << GCD(_a, _b);

    return 0;
}