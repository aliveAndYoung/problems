// by LIFECOULDBEDREAM
// 2025/09/21 09:10

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char A;
    cin >> A;
    if (A < 58)
    {
        cout << "IS DIGIT";
    }
    else
    {
        cout << "ALPHA\n";
        if (A < 91)
            cout << "IS CAPITAL";
        else
            cout << "IS SMALL";
    }

    return 0;
}