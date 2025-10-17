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
    int sum = 0;
    while (_a <= _b)
    {
        cout << _a << " ";
        sum += _a;
        _a++;
    }
    cout << "sum =" << sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        swapConditionaly(a, b);
        printAns(a, b);
        cin >> a >> b;
    }

    return 0;
}