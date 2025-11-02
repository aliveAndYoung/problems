// by LIFECOULDBEDREAM
// 2025/11/02 18:26

#include <bits/stdc++.h>
using namespace std;
bool isDistinct(int rr)
{
    int r = rr;
    set<int> digits;
    while (r)
    {
        int curr = r % 10;
        if (digits.count(curr))
        {
            return false;
        }
        digits.insert(curr);
        r /= 10;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    a++;
    while (true)
    {
        if (isDistinct(a))
        {
            cout << a;
            return 0;
        }
        a++;
    }

    return 0;
}