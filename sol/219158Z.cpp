// by LIFECOULDBEDREAM
// 2025/09/25 21:36

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    if (B * log(A) > D * log(C))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}