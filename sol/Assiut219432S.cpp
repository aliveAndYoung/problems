// by LIFECOULDBEDREAM
// 2025/09/23 19:22

#include <bits/stdc++.h>
using namespace std;

void swapConditionaly(int &_a, int &_b)
{
    if (_a <= _b)
        return;
    int temp;
    temp = _b;
    _b = _a;
    _a = temp;
};

void printAns(int &_a, int &_b)
{
    _a++;
    if (_a % 2 == 0)
        _a++;
    int sum = 0;
    while (_a < _b)
    {
        sum += _a;
        _a += 2;
    }
    cout << sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        swapConditionaly(a, b);
        printAns(a, b);
    }

    return 0;
}