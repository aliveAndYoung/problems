// by LIFECOULDBEDREAM
// 2025/09/21 18:05

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "Q1";
    else if (x < 0 && y > 0)
        cout << "Q2";
    else if (x < 0 && y < 0)
        cout << "Q3";
    else if (x > 0 && y < 0)
        cout << "Q4";
    else if (x == 0 && y != 0)
        cout << "Eixo Y";
    else if (x != 0 && y == 0)
        cout << "Eixo X";
    else if (x == 0 && y == 0)
        cout << "Origem";

    return 0;
}