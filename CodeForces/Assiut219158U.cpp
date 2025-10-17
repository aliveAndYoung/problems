// by LIFECOULDBEDREAM
// 2025/09/21 09:23

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a;
    int A;
    cin >> a;
    A = int(a);
    if (a - double(A) == 0)
    {
        cout << "int " << a;
    }
    else
    {
        a = a - double(A);
        cout << "float " << A << " " << a;
    }

    return 0;
}