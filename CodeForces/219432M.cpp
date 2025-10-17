// by LIFECOULDBEDREAM
// 2025/09/25 21:01

#include <bits/stdc++.h>
using namespace std;

bool isLucky(int a)
{
    int digit, temp = a;
    while (temp != 0)
    {
        digit = temp % 10;
        if (digit == 4 || digit == 7)
        {
            temp = temp / 10;
            continue;
        }
        return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int _a, _b;
    cin >> _a >> _b;
    bool is_1 = true;
    while (_a <= _b)
    {
        if (isLucky(_a))
        {
            is_1 = false;
            cout << _a << " ";
        }
        _a++;
    }
    is_1 && cout << -1;

    return 0;
}