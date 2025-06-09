#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, v0, v1, a, l, days = 0;
    cin >> c >> v0 >> v1 >> a >> l;
    while (c > 0)
    {
        days++;
        c -= v0;
        c = c > 0 ? c + l : c;
        v0 += a;
        v0 = v0 > v1 ? v1 : v0;
    }
    cout << days;
    return 0;
}
