// by LIFECOULDBEDREAM
// 2025/09/23 17:46

#include <bits/stdc++.h>
using namespace std;
void printDigits(int &a)
{
    int dig;
    if (a == 0)
    {

        cout << "0\n";
        return;
    }
    while (a)
    {
        dig = a % 10;
        a = a / 10;
        cout << dig << " ";
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, n;
    cin >> n;
    while (n--)
    {
        cin >> r;
        printDigits(r);
    }

    return 0;
}